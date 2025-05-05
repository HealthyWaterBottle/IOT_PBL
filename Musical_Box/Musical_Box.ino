#include <ezBuzzer.h>  // Library for a passive buzzer
#include <Keypad.h>    // Library for keypad
#include <stdint.h>    // Library to play tone
#include "pitches.h"   //

#define buzzerPin 11
/*..................................... Keypad_Setup .............................................*/
//Defining the number of rows and columns of the keypad
const byte ROWS = 4;
const byte COLS = 4;

//Key layout, allows the library to know what to return when a key is pressed
char keys[ROWS][COLS] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
  { '*', '0', '#', 'D' }
};

//Assigning pin connections on the Arduino to keypad rows and columns
byte rowPins[ROWS] = { 9, 8, 7, 6 };
byte colPins[COLS] = { 5, 4, 3, 2 };

//creates an object
Keypad customKeypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

/*........................................ Melody A .............................................*/
void melodyA() {
  
 int melody[4] = { NOTE_C3, NOTE_C4, NOTE_C5, NOTE_C6 };
 int durations[4] = { 100, 40, 60, 200 };
}

/*........................................ Melody B .............................................*/

//Runs once
void setup() {
  pinMode(buzzerPin, OUTPUT);    //buzzer pin definition
  Serial.begin(9600);            //Start the Serial Monitor
  tone(buzzerPin, NOTE_A5, 40);  // 40 ms of tone to check if the buzzer is functional
}
//Main logic
void loop() {
  char key = customKeypad.getKey();

  if (key) {
    Serial.print("Key pressed: ");
    Serial.println(key);
  }
  if (key == 'A') {
    melodyA();
  }
  switch (key) {
    case '1':
      tone(buzzerPin, NOTE_A4, 40);
      break;
    case '2':
      tone(buzzerPin, NOTE_B4, 40);
      break;
    case '3':
      tone(buzzerPin, NOTE_C4, 40);
      break;
    case '4':
      tone(buzzerPin, NOTE_D4, 40);
      break;
    case '5':
      tone(buzzerPin, NOTE_E4, 40);
      break;
    case '6':
      tone(buzzerPin, NOTE_F4, 40);
      break;
    case '7':
      tone(buzzerPin, NOTE_G4, 40);
      break;
    case '8':
      tone(buzzerPin, NOTE_A5, 40);
      break;
    case '9':
      tone(buzzerPin, NOTE_B5, 40);
      break;
    case '0':
      tone(buzzerPin, NOTE_C5, 40);
      break;
  }
}