#include "Keyboard.h"

const int starter = 9;
const int mam = 8;
const int odem = 7;
const int tlacitko = 6;
const int posl = 5;
void setup() {
pinMode(9,INPUT);
pinMode(8,INPUT);
pinMode(7,INPUT);
pinMode(6,INPUT);
pinMode(5,INPUT);
Keyboard.begin();
}

void loop() {
if(digitalRead(odem) == HIGH){
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.print("0351");
  Keyboard.releaseAll();
  }
if(digitalRead(starter == HIGH)){
  Keyboard.print("tz to zvladnes emi ");
}
if(digitalRead(odem == HIGH)){
  Keyboard.print("mam te rad mami");
}
if(digitalRead(odem == HIGH)){
  Keyboard.print("neser mi");
}
if(digitalRead(odem == HIGH)){
  Keyboard.print("tohle pujde na zapnuti baterek zatim ");
}

}
