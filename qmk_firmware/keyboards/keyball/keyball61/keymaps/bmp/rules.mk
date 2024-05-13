# MCU name
MCU_FAMILY = NRF52
MCU_SERIES = NRF52840
MCU_LDSCRIPT = nrf52840_ao
MCU = cortex-m4

# Bootloader selection
BOOTLOADER = caterina

RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow, required for BLE Micro Pro
OLED_ENABLE = yes

# Keyball61 is split keyboard.
SPLIT_KEYBOARD = yes

# This is unnecessary for processing KC_MS_BTN* for keyball.
MOUSEKEY_ENABLE = no

# EXTRAKEY_ENABLE = yes       # Audio control and System control(+450)

RGBLIGHT_DRIVER = WS2812
RGB_MATRIX_DRIVER = WS2812
CONSOLE_ENABLE = yes

# Keyball61 is duplex matrix, uses custom matrix.
CUSTOM_MATRIX = yes # for BLE Micro Pro
SRC += matrix.c

# Build Options
#   change yes to no to disable
#
COMMAND_ENABLE = yes        # Commands for debug and configuration
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
MIDI_ENABLE = no            # MIDI support (+2400 to 4200, depending on config)
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches
HD44780_ENABLE = no 		# Enable support for HD44780 based LCDs (+400)
COMBO_ENABLE = yes
MOUSE_SHARED_EP = no        # Should be disabled for BLE Micro Pro

# Include for auto mouse layer
SRC += lib/quantum/pointing_device/pointing_device_auto_mouse.c

# Support bmp keyboard configuration
SRC += keyboard.c