#include "Keyboard.h"

const int rizeni = 9;
const int sberac = 8;
const int pomkom = 7;
const int hlvyp = 6;
const int smerD = 5;
const int smerV = 4;
const int pomjizd = 3;
void setup() {
pinMode(9,INPUT);
pinMode(8,INPUT);
pinMode(7,INPUT);
pinMode(6,INPUT);
pinMode(5,INPUT);
pinMode(4,INPUT);
pinMode(3,INPUT);
Keyboard.begin();
}

void loop() {
if(digitalRead(rizeni) == HIGH){
  Keyboard.press(KEY_F13);
  Keyboard.releaseAll();
  delay(100);  
}
if(digitalRead(sberac) == HIGH){
  Keyboard.press(KEY_F14);
  Keyboard.releaseAll();
  delay(100);
}
if(digitalRead(pomkom) == HIGH){
  Keyboard.press(KEY_F15);
  Keyboard.releaseAll();
  delay(100);
}
if(digitalRead(hlvyp) == HIGH){
  Keyboard.press(KEY_F16);
  Keyboard.releaseAll();
  delay(100);
}
if(digitalRead(smerD) == HIGH){
  Keyboard.press(KEY_F17);
  Keyboard.releaseAll();
  delay(100);
}
if(digitalRead(smerV) == HIGH){
  Keyboard.press(KEY_F18);
  Keyboard.releaseAll();
  delay(100);
}
if(digitalRead(pomjizd) == HIGH){
  Keyboard.press(KEY_F19);
  Keyboard.releaseAll();
  delay(100);
}
}
