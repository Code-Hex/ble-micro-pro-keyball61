RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
OLED_ENABLE = yes
SPLIT_KEYBOARD = yes

# This is unnecessary for processing KC_MS_BTN* for keyball.
MOUSEKEY_ENABLE = no

# EXTRAKEY_ENABLE = yes       # Audio control and System control(+450)

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

# Include for auto mouse layer
SRC += lib/quantum/pointing_device/pointing_device_auto_mouse.c
