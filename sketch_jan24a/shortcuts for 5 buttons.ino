#include "Keyboard.h" //importování knihovny pro usb keyboard

const int starter = 9; //konstatování pinů pro tlačítka
const int mam = 8;
const int pass = 7;
const int tlacitko = 6;
const int posl = 5;
void setup() {
pinMode(9,INPUT); //nastavování pinů tlačítek na vstupy
pinMode(8,INPUT);
pinMode(7,INPUT);
pinMode(6,INPUT);
pinMode(5,INPUT);
Keyboard.begin();
}

void loop() {
if(digitalRead(pass) == HIGH){
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.print("PASSWORD");
  Keyboard.releaseAll();
  }
if(digitalRead(starter) == HIGH){
  Keyboard.print("to zvladnes emi ");
}
if(digitalRead(mam) == HIGH){
  Keyboard.print("mam te rad mami");
}
if(digitalRead(posl) == HIGH){
  Keyboard.print("nestvi me");
}
if(digitalRead(tlacitko) == HIGH){
  Keyboard.print("tohle pujde na zapnuti baterek zatim ");
}

}
