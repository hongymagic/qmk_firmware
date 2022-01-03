# MCU name
MCU = STM32F303

# Bootloader selection
BOOTLOADER = stm32-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = lite     # Enable Bootmagic Lite
VIA_ENABLE = yes            # Enable VIA
LTO_ENABLE = yes            # Enable LTO

MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control

COMMAND_ENABLE = no         # Commands for debug and configuration
CONSOLE_ENABLE = no         # Console for debug
NKRO_ENABLE = yes           # Enable N-Key Rollover

WPM_ENABLE = no

RGB_MATRIX_ENABLE = yes
#RGB_MATRIX_DRIVER = AW20216

#RGB_MATRIX_SOLID_REACTIVE_SIMPLE = yes
#RGB_MATRIX_CYCLE_LEFT_RIGHT = yes
#RGB_MATRIX_CYCLE_PINWHEEL = yes
#RGB_MATRIX_SPLASH = yes

SLEEP_LED_ENABLE = no       # Sleep LED
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
BLUETOOTH_ENABLE = no       # No bluetooth
ENCODER_ENABLE = yes
