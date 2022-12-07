BOOTLOADER = atmel-dfu
MOUSEKEY_ENABLE = yes # Mouse keys
BOOTMAGIC_ENABLE = no     # Enable Bootmagic Lite
UNICODE_ENABLE = yes         # Unicode
EXTRAKEY_ENABLE = yes # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output
EXTRAFLAGS += -flto		# to save space

