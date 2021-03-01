#include "Keyboard.h"
#include "Mouse.h"

#define blinkInterval 50
#define ledPin 3
#define buttonPin 6

int defaultDelay = 4;
int defaultCharDelay = 5;
int rMin = 0;
int rMax = 100;

bool ledOn = true;

void typeKey(int key){
  Keyboard.press(key);
  delay(defaultCharDelay);
  Keyboard.release(key);
}

void setup(){
  
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);
  
  if(digitalRead(buttonPin) == LOW){
    
    Keyboard.begin();
    Mouse.begin();
    
    /* ----- Begin-Script -----*/
    
    // -----------------------------

    delay(defaultDelay);
    // ===backgroung flip prank

    delay(defaultDelay);
    // ===by Mekhla

    delay(defaultDelay);
    // -----------------------------

    delay(defaultDelay);
    // ==taking ss of desktop

    delay(defaultDelay);
    delay(200);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(100);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(50);

    delay(defaultDelay);
    typeKey(206);

    delay(defaultDelay);
    // ==disabling desktop icons

    delay(defaultDelay);
    Keyboard.press(229);
    Keyboard.press(KEY_F10);
    Keyboard.releaseAll();

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    typeKey(KEY_RIGHT_ARROW);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);
    for(int i = 0; i < 4; i++) {
      typeKey(KEY_DOWN_ARROW);
    }

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(200);

    delay(defaultDelay);
    // ==disabling taskbar

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(114);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(300);

    delay(defaultDelay);
    Keyboard.print("ms-settings:taskbar");

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    typeKey(KEY_TAB);

    delay(defaultDelay);
    delay(50);

    delay(defaultDelay);
    typeKey(KEY_TAB);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_TAB);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(' ');

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();

    delay(defaultDelay);
    // ==selecting and rotating the ss

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(114);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    Keyboard.print("C:\\Users\\%USERNAME%\\Pictures\\Screenshots");

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    typeKey(KEY_END);

    delay(defaultDelay);
    Keyboard.press(229);
    Keyboard.press(KEY_F10);
    Keyboard.releaseAll();

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);
    for(int i = 0; i < 8; i++) {
      typeKey(KEY_DOWN_ARROW);
    }

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    Keyboard.press(229);
    Keyboard.press(KEY_F10);
    Keyboard.releaseAll();

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);
    for(int i = 0; i < 8; i++) {
      typeKey(KEY_DOWN_ARROW);
    }

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    Keyboard.press(229);
    Keyboard.press(KEY_F10);
    Keyboard.releaseAll();

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);
    for(int i = 0; i < 4; i++) {
      typeKey(KEY_DOWN_ARROW);
    }

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();
    
    /* ----- End-Script -----*/
    
    Keyboard.end();
  }
}

void loop(){
  ledOn = !ledOn;
  digitalWrite(ledPin, ledOn);
  delay(blinkInterval);
}