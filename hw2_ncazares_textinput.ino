#if defined(ARDUINO) 
SYSTEM_MODE(MANUAL); 
#endif

#include <algorithm>
int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7};  // buttons are connected to buttonPins
int buttonCount = 8;
int clicked = 0;    // keeps track of how many buttons out of the 7 have been clicked

std::array<int, 7> newLetter {0,0,0,0,0,0,0};
std::array<int, 7> arrA {0,1,2,3,5,6,7};
std::array<int, 7> arrB {1,2,3,4,5,6,7};
std::array<int, 7> arrC {0,0,0,1,4,5,6};
std::array<int, 7> arrD {0,0,2,3,4,5,7};
std::array<int, 7> arrE {0,0,1,4,5,6,7};
std::array<int, 7> arrF {0,0,0,1,5,6,7};
std::array<int, 7> arrG {0,1,2,3,4,6,7};
std::array<int, 7> arrH {0,0,2,3,5,6,7};
std::array<int, 7> arrI {0,0,0,0,0,5,6};
std::array<int, 7> arrJ {0,0,0,2,3,4,5};
std::array<int, 7> arrK {0,0,0,0,5,6,7};
std::array<int, 7> arrL {0,0,0,0,4,5,6};
std::array<int, 7> arrM {0,0,1,2,3,5,6};
std::array<int, 7> arrN {0,0,0,0,3,5,7};
std::array<int, 7> arrO {0,1,2,3,4,5,6};
std::array<int, 7> arrP {0,0,1,2,5,6,7};
std::array<int, 7> arrQ {0,0,1,2,3,6,7};
std::array<int, 7> arrR {0,0,0,0,0,5,7};
std::array<int, 7> arrS {0,0,1,3,4,6,7};
std::array<int, 7> arrT {0,0,0,0,1,5,6};
std::array<int, 7> arrU {0,0,0,0,3,4,5};
std::array<int, 7> arrV {0,0,2,3,4,5,6};
std::array<int, 7> arrW {0,2,3,4,5,6,7};
std::array<int, 7> arrX {0,0,0,2,3,5,6};
std::array<int, 7> arrY {0,0,2,3,4,6,7};
std::array<int, 7> arrZ {0,0,1,2,4,5,7};
std::array<int, 7> arrSpace {0,0,0,0,0,0,4};

void setup() {
  for (int i = 0; i < buttonCount; i++) { 
    pinMode(pins[i], INPUT_PULLUP);      // sets all pins as input pullup resistors
}
}

void loop() {
  // record pressed buttons in newLetter array
  if (digitalRead(pins[0]) == LOW) {
//    Serial.println("Button 1 pressed");       // prints statement when button 1 pressed
    delay(200);
    newLetter[clicked] = 1;
    clicked = clicked + 1;    
  }
  if (digitalRead(pins[1]) == LOW) {
//    Serial.println("Button 2 pressed");       // prints statement when button 2 pressed
    delay(200);
    newLetter[clicked] = 2;
    clicked = clicked + 1; 
  }
  if (digitalRead(pins[2]) == LOW) {
//    Serial.println("Button 3 pressed");       // prints statement when button 3 pressed
    delay(200);
    newLetter[clicked] = 3;
    clicked = clicked + 1; 
  }
  if (digitalRead(pins[3]) == LOW) {
//    Serial.println("Button 4 pressed");       // prints statement when button 4 pressed
    delay(200);
    newLetter[clicked] = 4;
    clicked = clicked + 1; 
  }
  if (digitalRead(pins[4]) == LOW) {
//    Serial.println("Button 5 pressed");       // prints statement when button 5 pressed
    delay(200);
    newLetter[clicked] = 5;
    clicked = clicked + 1; 
  }
  if (digitalRead(pins[5]) == LOW) {
//    Serial.println("Button 6 pressed");       // prints statement when button 6 pressed
    delay(200);
    newLetter[clicked] = 6;
    clicked = clicked + 1; 
  }
  if (digitalRead(pins[6]) == LOW) {
//    Serial.println("Button 7 pressed");       // prints statement when button 7 pressed
    delay(200);
    newLetter[clicked] = 7;
    clicked = clicked + 1; 
  }
  if (digitalRead(pins[7]) == LOW) {
//    Serial.println("End current letter, and start a new letter");  // prints statement when button 8 pressed
    delay(200); 
    
    // sort buttons array in ascending order
    std::sort(newLetter.begin(),newLetter.end());

//    // debug
//    int i;
//    for (i = 0; i < 7; i = i + 1) {
//      Serial.print(newLetter[i]); }
//    Serial.println();
//    delay(250);
    
    // match arrays to letter values
    if( newLetter == arrA ) {
      Serial.print("A");
    } 
    if( newLetter == arrB ) {
      Serial.print("B");
    } 
    if( newLetter == arrC ) {
      Serial.print("C");
    }
    if( newLetter == arrD ) {
      Serial.print("D");
    }
    if( newLetter == arrE ) {
      Serial.print("E");
    }
    if( newLetter == arrF ) {
      Serial.print("F");
    }
    if( newLetter == arrG ) {
      Serial.print("G");
    }
    if( newLetter == arrH ) {
      Serial.print("H");
    }
    if( newLetter == arrI ) {
      Serial.print("I");
    }
    if( newLetter == arrJ ) {
      Serial.print("J");
    }
    if( newLetter == arrK ) {
      Serial.print("K");
    }
    if( newLetter == arrL ) {
      Serial.print("L");
    }
    if( newLetter == arrM ) {
      Serial.print("M");
    }
    if( newLetter == arrN ) {
      Serial.print("N");
    }
    if( newLetter == arrO ) {
      Serial.print("O");
    }
    if( newLetter == arrP ) {
      Serial.print("P");
    }
    if( newLetter == arrQ ) {
      Serial.print("Q");
    }
    if( newLetter == arrR ) {
      Serial.print("R");
    }
    if( newLetter == arrS ) {
      Serial.print("S");
    }
    if( newLetter == arrT ) {
      Serial.print("T");
    }
    if( newLetter == arrU ) {
      Serial.print("U");
    }
    if( newLetter == arrV ) {
      Serial.print("V");
    }
    if( newLetter == arrW ) {
      Serial.print("W");
    }
    if( newLetter == arrX ) {
      Serial.print("X");
    }
    if( newLetter == arrY ) {
      Serial.print("Y");
    }
    if( newLetter == arrZ ) {
      Serial.print("Z");
    }
    if( newLetter == arrSpace ) {
      Serial.print(" ");
    }
    
    clicked = 0; // resets clicked
    newLetter = {0, 0, 0, 0, 0, 0, 0};
    
  } // this parenth ends tact button execution


} // this is the parenth to end them all

