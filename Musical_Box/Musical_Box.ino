#include <ezBuzzer.h>  // Library for a passive buzzer
#include <Keypad.h>    // Library for keypad
#include "pitches.h"   //

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

/*..................................... Buzer_Setup .............................................*/
const int buzzerPin = 11;
/*...................................playMelody_Function.........................................*/
void playMelody(int *melody, int *noteDurations, int length) {
  for (int x = 0; x < length; x++) {  // Controls how many time the function loops once initiated. create integer x, assigns 0 x, checks if x is less tan the length before increasing by 1
    tone(buzzerPin, melody[x], noteDurations[x]);
    delay(noteDurations[x] * 0.5);  //Gives time between each tone otherwise you just hear a bip
    noTone(buzzerPin);              // stops
  }
}
/*........................................ Melody A .............................................*/
void MelodyA() {
  int notes[] = { NOTE_C4, NOTE_D4, NOTE_F5 };
  int durA[] = { 400, 400, 400 };
  playMelody(notes, durA, 3);
}

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
  
  if (key == 'A') MelodyA();
}