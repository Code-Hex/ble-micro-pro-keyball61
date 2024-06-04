SRC += serial.c
SRC += transactions.c

# MCU name
MCU = cortex-m4
MCU_LDSCRIPT = nrf52840_ao
PLATFORM_KEY = bmp
BOOTLOADER = custom
EEPROM_DRIVER  = custom

# Keyball61 is duplex matrix, uses custom matrix.
CUSTOM_MATRIX = yes # for BLE Micro Pro
SRC += lib/matrix.c

MOUSE_SHARED_EP = no
CONSOLE_ENABLE = yes          # Console for debug

# Required
OLED_ENABLE = yes
RGBLIGHT_ENABLE = yes
SPLIT_KEYBOARD = yes
SPLIT_TRANSPORT = custom

# Vial
QMK_SETTINGS = yes
TAP_DANCE_ENABLE = yes

VIA_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = yes

GREP ?= grep

uf2: $(BUILD_DIR)/$(TARGET).bin
	$(UF2CONV) -f nrf52 -b 0x26000 -o $(TARGET).uf2 $(BUILD_DIR)/$(TARGET).bin -c
	-$(UF2CONV) -f nrf52 -b 0x26000 $(BUILD_DIR)/$(TARGET).bin

nrfutil: zip # in platforms/bmp/platform.mk
	if $(GREP) -q -s Microsoft /proc/version; then \
		echo 'ERROR: nrfutil cannot be automated within the Windows Subsystem for Linux (WSL) currently.'; \
	else \
		printf "Detecting USB port, put your controller into dfu-mode now."; \
		ls /dev/tty* > /tmp/1; \
		while [ -z $$USB ]; do \
			sleep 0.5; \
			printf "."; \
			ls /dev/tty* > /tmp/2; \
			USB=`comm -13 /tmp/1 /tmp/2 | $(GREP) -o '/dev/tty.*' | head -n 1`; \
			mv /tmp/2 /tmp/1; \
		done; \
		echo ""; \
		echo "Detected controller on USB port at $$USB"; \
		if $(GREP) -q -s 'MINGW\|MSYS' /proc/version; then \
			USB=`echo "$$USB" | perl -pne 's/\/dev\/ttyS(\d+)/COM.($$1+1)/e'`; \
			echo "Remapped MSYS2 USB port to $$USB"; \
		fi; \
		sleep 1; \
		echo "Programming Started"; \
		$(NRFUTIL) dfu usb-serial -pkg $(BUILD_DIR)/$(TARGET).zip -p $$USB; \
	fi
