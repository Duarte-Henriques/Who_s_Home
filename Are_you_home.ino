#include <Keypad.h>
#include "LedControl.h"

LedControl ledControl = LedControl(12, 10, 11, 1); //Pin number

unsigned long delayTime1 = 150, delayTime2 = 300, delayTime3 = 10000;

//wake up call of the LED Matrix and keypad membrane
void setup() {
  Serial.begin(9600); //show the value pressed in the membrane keypad in the Serial Monitor (Tools)
  ledControl.shutdown(0, false); 
  ledControl.setIntensity(0, 8);
  ledControl.clearDisplay(0);
}

const byte ROWS = 4;
const byte COLS = 4;
char hexaKeys[ROWS][COLS] = {
  {'D','C','B','A'},
  {'#','9','6','3'},
  {'0','8','5','2'},
  {'*','7','4','1'}
};

//Pin number
byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

//byte arrays to represent each letter
byte a[8] = {B00000000, B00000000, B01111110, B00010001, B00010001, B01111110, B00000000, B00000000};
byte c[8] = {B00000000, B00000000, B00111100, B01000010, B01000010, B01000010, B00000000, B00000000};
byte d[8] = {B00000000, B00000000, B00110000, B01001000, B01001000, B01111110, B00000000, B00000000};
byte e[8] = {B00000000, B00000000, B00111100, B01000010, B01010010, B01010010, B00001100, B00000000};
byte i[8] = {B00000000, B00000000, B00000000, B00000000, B01000100, B01111101, B01000000, B00000000};
byte l[8] = {B00000000, B00000000, B00111110, B00100000, B00100000, B00100000, B00000000, B00000000};
byte n[8] = {B00000000, B01111110, B00000100, B00000010, B00000010, B00000010, B01111100, B00000000};
byte o[8] = {B00000000, B00000000, B00111100, B01000010, B01000010, B01000010, B00111100, B00000000};
byte r[8] = {B00000000, B00000000, B01111110, B00000100, B00000010, B00000010, B00000000, B00000000};
byte s[8] = {B00000000, B00000000, B00101110, B00101010, B00101010, B00101010, B00111010, B00000000};
byte t[8] = {B00000000, B00000000, B00000010, B00000010, B01111110, B00000010, B00000010, B00000000};
byte u[8] = {B00000000, B00000000, B00111110, B01000000, B01000000, B00111110, B00000000, B00000000};
byte v[8] = {B00000000, B00000100, B00011000, B00100000, B00011000, B00000100, B00000000, B00000000};

//functions associated with letters

void write_ola()  {
  ledControl.setRow(0,0,o[0]);
  ledControl.setRow(0,1,o[1]);
  ledControl.setRow(0,2,o[2]);
  ledControl.setRow(0,3,o[3]);
  ledControl.setRow(0,4,o[4]);
  ledControl.setRow(0,5,o[5]);
  ledControl.setRow(0,6,o[6]);
  ledControl.setRow(0,7,o[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,l[0]);
  ledControl.setRow(0,1,l[1]);
  ledControl.setRow(0,2,l[2]);
  ledControl.setRow(0,3,l[3]);
  ledControl.setRow(0,4,l[4]);
  ledControl.setRow(0,5,l[5]);
  ledControl.setRow(0,6,l[6]);
  ledControl.setRow(0,7,l[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,a[0]);
  ledControl.setRow(0,1,a[1]);
  ledControl.setRow(0,2,a[2]);
  ledControl.setRow(0,3,a[3]);
  ledControl.setRow(0,4,a[4]);
  ledControl.setRow(0,5,a[5]);
  ledControl.setRow(0,6,a[6]);
  ledControl.setRow(0,7,a[7]);
  delay(delayTime2);
}

void write_adeus(){
  ledControl.setRow(0,0,a[0]);
  ledControl.setRow(0,1,a[1]);
  ledControl.setRow(0,2,a[2]);
  ledControl.setRow(0,3,a[3]);
  ledControl.setRow(0,4,a[4]);
  ledControl.setRow(0,5,a[5]);
  ledControl.setRow(0,6,a[6]);
  ledControl.setRow(0,7,a[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,d[0]);
  ledControl.setRow(0,1,d[1]);
  ledControl.setRow(0,2,d[2]);
  ledControl.setRow(0,3,d[3]);
  ledControl.setRow(0,4,d[4]);
  ledControl.setRow(0,5,d[5]);
  ledControl.setRow(0,6,d[6]);
  ledControl.setRow(0,7,d[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,e[0]);
  ledControl.setRow(0,1,e[1]);
  ledControl.setRow(0,2,e[2]);
  ledControl.setRow(0,3,e[3]);
  ledControl.setRow(0,4,e[4]);
  ledControl.setRow(0,5,e[5]);
  ledControl.setRow(0,6,e[6]);
  ledControl.setRow(0,7,e[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,u[0]);
  ledControl.setRow(0,1,u[1]);
  ledControl.setRow(0,2,u[2]);
  ledControl.setRow(0,3,u[3]);
  ledControl.setRow(0,4,u[4]);
  ledControl.setRow(0,5,u[5]);
  ledControl.setRow(0,6,u[6]);
  ledControl.setRow(0,7,u[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,s[0]);
  ledControl.setRow(0,1,s[1]);
  ledControl.setRow(0,2,s[2]);
  ledControl.setRow(0,3,s[3]);
  ledControl.setRow(0,4,s[4]);
  ledControl.setRow(0,5,s[5]);
  ledControl.setRow(0,6,s[6]);
  ledControl.setRow(0,7,s[7]);
  delay(delayTime2);
}

void write_rita() {
  ledControl.setRow(0,0,r[0]);
  ledControl.setRow(0,1,r[1]);
  ledControl.setRow(0,2,r[2]);
  ledControl.setRow(0,3,r[3]);
  ledControl.setRow(0,4,r[4]);
  ledControl.setRow(0,5,r[5]);
  ledControl.setRow(0,6,r[6]);
  ledControl.setRow(0,7,r[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,i[0]);
  ledControl.setRow(0,1,i[1]);
  ledControl.setRow(0,2,i[2]);
  ledControl.setRow(0,3,i[3]);
  ledControl.setRow(0,4,i[4]);
  ledControl.setRow(0,5,i[5]);
  ledControl.setRow(0,6,i[6]);
  ledControl.setRow(0,7,i[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,t[0]);
  ledControl.setRow(0,1,t[1]);
  ledControl.setRow(0,2,t[2]);
  ledControl.setRow(0,3,t[3]);
  ledControl.setRow(0,4,t[4]);
  ledControl.setRow(0,5,t[5]);
  ledControl.setRow(0,6,t[6]);
  ledControl.setRow(0,7,t[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,a[0]);
  ledControl.setRow(0,1,a[1]);
  ledControl.setRow(0,2,a[2]);
  ledControl.setRow(0,3,a[3]);
  ledControl.setRow(0,4,a[4]);
  ledControl.setRow(0,5,a[5]);
  ledControl.setRow(0,6,a[6]);
  ledControl.setRow(0,7,a[7]);
  delay(delayTime2);
}

void write_carol(){
  ledControl.setRow(0,0,c[0]);
  ledControl.setRow(0,1,c[1]);
  ledControl.setRow(0,2,c[2]);
  ledControl.setRow(0,3,c[3]);
  ledControl.setRow(0,4,c[4]);
  ledControl.setRow(0,5,c[5]);
  ledControl.setRow(0,6,c[6]);
  ledControl.setRow(0,7,c[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,a[0]);
  ledControl.setRow(0,1,a[1]);
  ledControl.setRow(0,2,a[2]);
  ledControl.setRow(0,3,a[3]);
  ledControl.setRow(0,4,a[4]);
  ledControl.setRow(0,5,a[5]);
  ledControl.setRow(0,6,a[6]);
  ledControl.setRow(0,7,a[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,r[0]);
  ledControl.setRow(0,1,r[1]);
  ledControl.setRow(0,2,r[2]);
  ledControl.setRow(0,3,r[3]);
  ledControl.setRow(0,4,r[4]);
  ledControl.setRow(0,5,r[5]);
  ledControl.setRow(0,6,r[6]);
  ledControl.setRow(0,7,r[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,o[0]);
  ledControl.setRow(0,1,o[1]);
  ledControl.setRow(0,2,o[2]);
  ledControl.setRow(0,3,o[3]);
  ledControl.setRow(0,4,o[4]);
  ledControl.setRow(0,5,o[5]);
  ledControl.setRow(0,6,o[6]);
  ledControl.setRow(0,7,o[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,l[0]);
  ledControl.setRow(0,1,l[1]);
  ledControl.setRow(0,2,l[2]);
  ledControl.setRow(0,3,l[3]);
  ledControl.setRow(0,4,l[4]);
  ledControl.setRow(0,5,l[5]);
  ledControl.setRow(0,6,l[6]);
  ledControl.setRow(0,7,l[7]);
  delay(delayTime2);
}

void write_duarte(){
  ledControl.setRow(0,0,d[0]);
  ledControl.setRow(0,1,d[1]);
  ledControl.setRow(0,2,d[2]);
  ledControl.setRow(0,3,d[3]);
  ledControl.setRow(0,4,d[4]);
  ledControl.setRow(0,5,d[5]);
  ledControl.setRow(0,6,d[6]);
  ledControl.setRow(0,7,d[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,u[0]);
  ledControl.setRow(0,1,u[1]);
  ledControl.setRow(0,2,u[2]);
  ledControl.setRow(0,3,u[3]);
  ledControl.setRow(0,4,u[4]);
  ledControl.setRow(0,5,u[5]);
  ledControl.setRow(0,6,u[6]);
  ledControl.setRow(0,7,u[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,a[0]);
  ledControl.setRow(0,1,a[1]);
  ledControl.setRow(0,2,a[2]);
  ledControl.setRow(0,3,a[3]);
  ledControl.setRow(0,4,a[4]);
  ledControl.setRow(0,5,a[5]);
  ledControl.setRow(0,6,a[6]);
  ledControl.setRow(0,7,a[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,r[0]);
  ledControl.setRow(0,1,r[1]);
  ledControl.setRow(0,2,r[2]);
  ledControl.setRow(0,3,r[3]);
  ledControl.setRow(0,4,r[4]);
  ledControl.setRow(0,5,r[5]);
  ledControl.setRow(0,6,r[6]);
  ledControl.setRow(0,7,r[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,t[0]);
  ledControl.setRow(0,1,t[1]);
  ledControl.setRow(0,2,t[2]);
  ledControl.setRow(0,3,t[3]);
  ledControl.setRow(0,4,t[4]);
  ledControl.setRow(0,5,t[5]);
  ledControl.setRow(0,6,t[6]);
  ledControl.setRow(0,7,t[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,e[0]);
  ledControl.setRow(0,1,e[1]);
  ledControl.setRow(0,2,e[2]);
  ledControl.setRow(0,3,e[3]);
  ledControl.setRow(0,4,e[4]);
  ledControl.setRow(0,5,e[5]);
  ledControl.setRow(0,6,e[6]);
  ledControl.setRow(0,7,e[7]);
  delay(delayTime2);
}

void write_vicente(){
  ledControl.setRow(0,0,v[0]);
  ledControl.setRow(0,1,v[1]);
  ledControl.setRow(0,2,v[2]);
  ledControl.setRow(0,3,v[3]);
  ledControl.setRow(0,4,v[4]);
  ledControl.setRow(0,5,v[5]);
  ledControl.setRow(0,6,v[6]);
  ledControl.setRow(0,7,v[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,i[0]);
  ledControl.setRow(0,1,i[1]);
  ledControl.setRow(0,2,i[2]);
  ledControl.setRow(0,3,i[3]);
  ledControl.setRow(0,4,i[4]);
  ledControl.setRow(0,5,i[5]);
  ledControl.setRow(0,6,i[6]);
  ledControl.setRow(0,7,i[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,c[0]);
  ledControl.setRow(0,1,c[1]);
  ledControl.setRow(0,2,c[2]);
  ledControl.setRow(0,3,c[3]);
  ledControl.setRow(0,4,c[4]);
  ledControl.setRow(0,5,c[5]);
  ledControl.setRow(0,6,c[6]);
  ledControl.setRow(0,7,c[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,e[0]);
  ledControl.setRow(0,1,e[1]);
  ledControl.setRow(0,2,e[2]);
  ledControl.setRow(0,3,e[3]);
  ledControl.setRow(0,4,e[4]);
  ledControl.setRow(0,5,e[5]);
  ledControl.setRow(0,6,e[6]);
  ledControl.setRow(0,7,e[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,n[0]);
  ledControl.setRow(0,1,n[1]);
  ledControl.setRow(0,2,n[2]);
  ledControl.setRow(0,3,n[3]);
  ledControl.setRow(0,4,n[4]);
  ledControl.setRow(0,5,n[5]);
  ledControl.setRow(0,6,n[6]);
  ledControl.setRow(0,7,n[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,t[0]);
  ledControl.setRow(0,1,t[1]);
  ledControl.setRow(0,2,t[2]);
  ledControl.setRow(0,3,t[3]);
  ledControl.setRow(0,4,t[4]);
  ledControl.setRow(0,5,t[5]);
  ledControl.setRow(0,6,t[6]);
  ledControl.setRow(0,7,t[7]);
  delay(delayTime2);
  ledControl.setRow(0,0,e[0]);
  ledControl.setRow(0,1,e[1]);
  ledControl.setRow(0,2,e[2]);
  ledControl.setRow(0,3,e[3]);
  ledControl.setRow(0,4,e[4]);
  ledControl.setRow(0,5,e[5]);
  ledControl.setRow(0,6,e[6]);
  ledControl.setRow(0,7,e[7]);
  delay(delayTime2);
}

//byte arrays to represent each corner: Vicente = top left, Duarte = top right, Rita = bottom left, Carol = bottom right 
byte top_left[8] = {B00001111, B00001111, B00001111, B00001111, B00000000, B00000000, B00000000, B00000000};
byte top_left1[8] = {B00000111, B00000111, B00000111, B00000000, B00000000, B00000000, B00000000, B00000000};
byte top_left2[8] = {B00000011, B00000011, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000};
byte top_left3[8] = {B00000001, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000};
byte top_right[8] = {B00000000, B00000000, B00000000, B00000000, B00001111, B00001111, B00001111, B00001111};
byte top_right1[8] = {B00000000, B00000000, B00000000, B00000000, B00000000, B00000111, B00000111, B00000111};
byte top_right2[8] = {B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000011, B00000011};
byte top_right3[8] = {B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000001};
byte bottom_left[8] = {B11110000, B11110000, B11110000, B11110000, B00000000, B00000000, B00000000, B00000000};
byte bottom_left1[8] = {B11100000, B11100000, B11100000, B00000000, B00000000, B00000000, B00000000, B00000000};
byte bottom_left2[8] = {B11000000, B11000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000};
byte bottom_left3[8] = {B10000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000};
byte bottom_right[8] = {B00000000, B00000000, B00000000, B00000000, B11110000, B11110000, B11110000, B11110000};
byte bottom_right1[8] = {B00000000, B00000000, B00000000, B00000000, B00000000, B11100000, B11100000, B11100000};
byte bottom_right2[8] = {B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B11000000, B11000000};
byte bottom_right3[8] = {B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B10000000};

//functions associated with cornors

void top_left_out() {
  ledControl.setRow(0, 0, top_left[0]);
  ledControl.setRow(0, 1, top_left[1]);
  ledControl.setRow(0, 2, top_left[2]);
  ledControl.setRow(0, 3, top_left[3]);
  delay(delayTime1);
  ledControl.setRow(0, 0, top_left1[0]);
  ledControl.setRow(0, 1, top_left1[1]);
  ledControl.setRow(0, 2, top_left1[2]);
  ledControl.setRow(0, 3, top_left1[3]);
  delay(delayTime1);
  ledControl.setRow(0, 0, top_left2[0]);
  ledControl.setRow(0, 1, top_left2[1]);
  ledControl.setRow(0, 2, top_left2[2]);
  ledControl.setRow(0, 3, top_left2[3]);
  delay(delayTime1);
  ledControl.setRow(0, 0, top_left3[0]);
  ledControl.setRow(0, 1, top_left3[1]);
  ledControl.setRow(0, 2, top_left3[2]);
  ledControl.setRow(0, 3, top_left3[3]);
  delay(delayTime2);
}

void top_left_in() { 
  ledControl.setRow(0, 0, top_left3[0]);
  ledControl.setRow(0, 1, top_left3[1]);
  ledControl.setRow(0, 2, top_left3[2]);
  ledControl.setRow(0, 3, top_left3[3]);
  delay(delayTime1);
  ledControl.setRow(0, 0, top_left2[0]);
  ledControl.setRow(0, 1, top_left2[1]);
  ledControl.setRow(0, 2, top_left2[2]);
  ledControl.setRow(0, 3, top_left2[3]);
  delay(delayTime1);
  ledControl.setRow(0, 0, top_left1[0]);
  ledControl.setRow(0, 1, top_left1[1]);
  ledControl.setRow(0, 2, top_left1[2]);
  ledControl.setRow(0, 3, top_left1[3]);
  delay(delayTime1);
  ledControl.setRow(0, 0, top_left[0]);
  ledControl.setRow(0, 1, top_left[1]);
  ledControl.setRow(0, 2, top_left[2]);
  ledControl.setRow(0, 3, top_left[3]);
  delay(delayTime2);  
}

void top_right_out() {
  ledControl.setRow(0, 4, top_right[4]);
  ledControl.setRow(0, 5, top_right[5]);
  ledControl.setRow(0, 6, top_right[6]);
  ledControl.setRow(0, 7, top_right[7]);
  delay(delayTime1);
  ledControl.setRow(0, 4, top_right1[4]);
  ledControl.setRow(0, 5, top_right1[5]);
  ledControl.setRow(0, 6, top_right1[6]);
  ledControl.setRow(0, 7, top_right1[7]);
  delay(delayTime1);
  ledControl.setRow(0, 4, top_right2[4]);
  ledControl.setRow(0, 5, top_right2[5]);
  ledControl.setRow(0, 6, top_right2[6]);
  ledControl.setRow(0, 7, top_right2[7]);
  delay(delayTime1);
  ledControl.setRow(0, 4, top_right3[4]);
  ledControl.setRow(0, 5, top_right3[5]);
  ledControl.setRow(0, 6, top_right3[6]);
  ledControl.setRow(0, 7, top_right3[7]);
  delay(delayTime2);
}

void top_right_in() {
  ledControl.setRow(0, 4, top_right3[4]);
  ledControl.setRow(0, 5, top_right3[5]);
  ledControl.setRow(0, 6, top_right3[6]);
  ledControl.setRow(0, 7, top_right3[7]);
  delay(delayTime1);
  ledControl.setRow(0, 4, top_right2[4]);
  ledControl.setRow(0, 5, top_right2[5]);
  ledControl.setRow(0, 6, top_right2[6]);
  ledControl.setRow(0, 7, top_right2[7]);
  delay(delayTime1);
  ledControl.setRow(0, 4, top_right1[4]);
  ledControl.setRow(0, 5, top_right1[5]);
  ledControl.setRow(0, 6, top_right1[6]);
  ledControl.setRow(0, 7, top_right1[7]);
  delay(delayTime1);
  ledControl.setRow(0, 4, top_right[4]);
  ledControl.setRow(0, 5, top_right[5]);
  ledControl.setRow(0, 6, top_right[6]);
  ledControl.setRow(0, 7, top_right[7]);
  delay(delayTime2);
}

void bottom_right_out() {
  ledControl.setRow(0, 4, bottom_right[4]);
  ledControl.setRow(0, 5, bottom_right[5]);
  ledControl.setRow(0, 6, bottom_right[6]);
  ledControl.setRow(0, 7, bottom_right[7]);
  delay(delayTime1);
  ledControl.setRow(0, 4, bottom_right1[4]);
  ledControl.setRow(0, 5, bottom_right1[5]);
  ledControl.setRow(0, 6, bottom_right1[6]);
  ledControl.setRow(0, 7, bottom_right1[7]);
  delay(delayTime1);
  ledControl.setRow(0, 4, bottom_right2[4]);
  ledControl.setRow(0, 5, bottom_right2[5]);
  ledControl.setRow(0, 6, bottom_right2[6]);
  ledControl.setRow(0, 7, bottom_right2[7]);
  delay(delayTime1);
  ledControl.setRow(0, 4, bottom_right3[4]);
  ledControl.setRow(0, 5, bottom_right3[5]);
  ledControl.setRow(0, 6, bottom_right3[6]);
  ledControl.setRow(0, 7, bottom_right3[7]);
  delay(delayTime2);
}

void bottom_right_in() {
  ledControl.setRow(0, 4, bottom_right3[4]);
  ledControl.setRow(0, 5, bottom_right3[5]);
  ledControl.setRow(0, 6, bottom_right3[6]);
  ledControl.setRow(0, 7, bottom_right3[7]);
  delay(delayTime1);
  ledControl.setRow(0, 4, bottom_right2[4]);
  ledControl.setRow(0, 5, bottom_right2[5]);
  ledControl.setRow(0, 6, bottom_right2[6]);
  ledControl.setRow(0, 7, bottom_right2[7]);
  delay(delayTime1);
  ledControl.setRow(0, 4, bottom_right1[4]);
  ledControl.setRow(0, 5, bottom_right1[5]);
  ledControl.setRow(0, 6, bottom_right1[6]);
  ledControl.setRow(0, 7, bottom_right1[7]);
  delay(delayTime1);
  ledControl.setRow(0, 4, bottom_right[4]);
  ledControl.setRow(0, 5, bottom_right[5]);
  ledControl.setRow(0, 6, bottom_right[6]);
  ledControl.setRow(0, 7, bottom_right[7]);
  delay(delayTime2);
}

void bottom_left_out() {
  ledControl.setRow(0, 0, bottom_left[0]);
  ledControl.setRow(0, 1, bottom_left[1]);
  ledControl.setRow(0, 2, bottom_left[2]);
  ledControl.setRow(0, 3, bottom_left[3]);
  delay(delayTime1);
  ledControl.setRow(0, 0, bottom_left1[0]);
  ledControl.setRow(0, 1, bottom_left1[1]);
  ledControl.setRow(0, 2, bottom_left1[2]);
  ledControl.setRow(0, 3, bottom_left1[3]);
  delay(delayTime1);
  ledControl.setRow(0, 0, bottom_left2[0]);
  ledControl.setRow(0, 1, bottom_left2[1]);
  ledControl.setRow(0, 2, bottom_left2[2]);
  ledControl.setRow(0, 3, bottom_left2[3]);
  delay(delayTime1);
  ledControl.setRow(0, 0, bottom_left3[0]);
  ledControl.setRow(0, 1, bottom_left3[1]);
  ledControl.setRow(0, 2, bottom_left3[2]);
  ledControl.setRow(0, 3, bottom_left3[3]);
  delay(delayTime2);
}

void bottom_left_in() {
  ledControl.setRow(0, 0, bottom_left3[0]);
  ledControl.setRow(0, 1, bottom_left3[1]);
  ledControl.setRow(0, 2, bottom_left3[2]);
  ledControl.setRow(0, 3, bottom_left3[3]);
  delay(delayTime1);
  ledControl.setRow(0, 0, bottom_left2[0]);
  ledControl.setRow(0, 1, bottom_left2[1]);
  ledControl.setRow(0, 2, bottom_left2[2]);
  ledControl.setRow(0, 3, bottom_left2[3]);
  delay(delayTime1);
  ledControl.setRow(0, 0, bottom_left1[0]);
  ledControl.setRow(0, 1, bottom_left1[1]);
  ledControl.setRow(0, 2, bottom_left1[2]);
  ledControl.setRow(0, 3, bottom_left1[3]);
  delay(delayTime1);
  ledControl.setRow(0, 0, bottom_left[0]);
  ledControl.setRow(0, 1, bottom_left[1]);
  ledControl.setRow(0, 2, bottom_left[2]);
  ledControl.setRow(0, 3, bottom_left[3]);
  delay(delayTime2);
}

/*
TIME_LINE
- fazer todos os cantos -> done
- fazer animações cantos -> done
- fazer letras -> done
- fazer nomes (funções) -> done
- fazer programa em si -> doneb
- adicionar sensor de movimento para mostrar quem está em casa
*/

//variables to show who is in the house:
bool is_vicente_home = false, is_rita_home = false, is_carol_home = false, is_duarte_home = false;

//variables to that represent the key value of each one of us:
char rita_key = '#', carol_key = 'C', vicente_key = '1', duarte_key = 'D';

//byte arrays to represent each corner: Vicente = top left, Duarte = top right, Rita = bottom left, Carol = bottom right

//Program itself
void loop(){
  int room;
  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
  }
  
  ledControl.clearDisplay(0);

  if (customKey == rita_key && is_rita_home == true) {
    ledControl.clearDisplay(0);
    bottom_left_out();
    ledControl.clearDisplay(0);
    write_adeus();
    ledControl.clearDisplay(0);
    write_rita();
    ledControl.clearDisplay(0);
    is_rita_home = false;
  } else if (customKey == rita_key && is_rita_home == false) {
    ledControl.clearDisplay(0);
    bottom_left_in();
    ledControl.clearDisplay(0);
    write_ola();
    ledControl.clearDisplay(0);
    write_rita();
    ledControl.clearDisplay(0);
    is_rita_home = true;
  }

  if (customKey == carol_key && is_carol_home == true) {
    ledControl.clearDisplay(0);
    bottom_right_out();
    ledControl.clearDisplay(0);
    write_adeus();
    ledControl.clearDisplay(0);
    write_carol();
    ledControl.clearDisplay(0);
    is_carol_home = false;
  } else if (customKey == carol_key && is_carol_home == false) {
    ledControl.clearDisplay(0);
    bottom_right_in();
    ledControl.clearDisplay(0);
    write_ola();
    ledControl.clearDisplay(0);
    write_carol();
    ledControl.clearDisplay(0);
    is_carol_home = true;
  }

  if (customKey == vicente_key && is_vicente_home == true) {
    ledControl.clearDisplay(0);
    top_left_out();
    ledControl.clearDisplay(0);
    write_adeus();
    ledControl.clearDisplay(0);
    write_vicente();
    ledControl.clearDisplay(0);
    is_vicente_home = false;
  } else if (customKey == vicente_key && is_vicente_home == false) {
    ledControl.clearDisplay(0);
    top_left_in();
    ledControl.clearDisplay(0);
    write_ola();
    ledControl.clearDisplay(0);
    write_vicente();
    ledControl.clearDisplay(0);
    is_vicente_home = true;
  }

  if (customKey == duarte_key && is_duarte_home == true) {
    ledControl.clearDisplay(0);
    top_right_out();
    ledControl.clearDisplay(0);
    write_adeus();
    ledControl.clearDisplay(0);
    write_duarte();
    ledControl.clearDisplay(0);
    is_duarte_home = false;
  } else if (customKey == duarte_key && is_duarte_home == false) {
    ledControl.clearDisplay(0);
    top_right_in();
    ledControl.clearDisplay(0);
    write_ola();
    ledControl.clearDisplay(0);
    write_duarte();
    ledControl.clearDisplay(0);
    is_duarte_home = true;
  }

  bool is_home[4] = {is_vicente_home, is_rita_home, is_carol_home, is_duarte_home};
  int i = 0;

  if (customKey == '*') {
    for (i = 0; i < 4; i++) {
      if (is_home[i] == true) {
        if (i == 0) {
          ledControl.clearDisplay(0);
          top_left_in();
          ledControl.clearDisplay(0);
        } else if (i == 1) {
          ledControl.clearDisplay(0);
          bottom_left_in();
          ledControl.clearDisplay(0);
        } else if (i == 2) {
          ledControl.clearDisplay(0);
          bottom_right_in();
          ledControl.clearDisplay(0);
        } else if (i == 3) {
          ledControl.clearDisplay(0);
          top_right_in();
          ledControl.clearDisplay(0);
        }
      }
    }
  }

  ledControl.clearDisplay(0);

}
