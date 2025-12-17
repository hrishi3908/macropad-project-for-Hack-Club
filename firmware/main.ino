// Custom Macropad Firmware Plan
// This is a planning version of the firmware

/*
Firmware Logic Overview:

1. Initialize USB HID so the macropad is detected as a keyboard.
2. Configure GPIO pins for 6 mechanical keys.
3. Detect key presses and map them to predefined macros or shortcuts.
4. Initialize OLED display using I2C.
5. Display active profile or macro name on OLED.
6. Continuously listen for key input in loop().
*/

void setup() {
  // Initialize USB HID keyboard
  // Initialize GPIO pins for keys
  // Initialize OLED display
}

void loop() {
  // Check key states
  // If key pressed:
  //   Send corresponding macro via HID
  //   Update OLED display
}
