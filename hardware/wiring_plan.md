## Wiring Plan (Initial)

- Each mechanical switch will be connected to a digital GPIO pin on the microcontroller.
- Switches will use internal pull-up or pull-down resistors.
- The OLED display will connect via I2C:
  - SDA → MCU SDA
  - SCL → MCU SCL
  - VCC → 3.3V or 5V
  - GND → GND

This initial version uses direct pin connections.
A key matrix may be implemented in future revisions.
