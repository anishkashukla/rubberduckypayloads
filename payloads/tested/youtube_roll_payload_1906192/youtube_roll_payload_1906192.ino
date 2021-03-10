#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(3000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("https://www.youtube.com/watch?v=niUyz5TQShU");

  typeKey(KEY_RETURN);

  delay(3000);

  Keyboard.print("f");

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}