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
    
    /* [Parsed By Duckuino (Licensed under MIT) - for more information visit: https://github.com/Nurrl/Dckuino.js] */    
    delay(1000);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_ESC);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    Keyboard.print("SCREEN BRIGHTNESS");

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_LEFT_ARROW);

    delay(defaultDelay);
    delay(1000);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(1000);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_ESC);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    Keyboard.print("DATE AND TIME");

    delay(defaultDelay);
    delay(200);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(200);

    delay(defaultDelay);
    typeKey(KEY_TAB);

    delay(defaultDelay);
    delay(200);

    delay(defaultDelay);
    typeKey(' ');

    delay(defaultDelay);
    delay(200);

    delay(defaultDelay);
    typeKey(KEY_TAB);

    delay(defaultDelay);
    typeKey(' ');

    delay(defaultDelay);
    delay(200);

    delay(defaultDelay);
    typeKey(KEY_TAB);

    delay(defaultDelay);
    typeKey(KEY_TAB);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(20);

    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(1000);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_ESC);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    Keyboard.print("DOCUMENTS");

    delay(defaultDelay);
    delay(200);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    Keyboard.print("A");

    delay(defaultDelay);
    delay(200);

    delay(defaultDelay);
    Keyboard.print("X");

    delay(defaultDelay);
    delay(200);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(200);

    delay(defaultDelay);
    Keyboard.print("V");

    delay(defaultDelay);
    delay(1000);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(200);

    delay(defaultDelay);
    typeKey(KEY_RETURN);
    
  
    
    Keyboard.end();
  }
}

void loop(){
  ledOn = !ledOn;
  digitalWrite(ledPin, ledOn);
  delay(blinkInterval);
}
