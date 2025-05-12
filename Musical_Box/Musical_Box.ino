#include <Keypad.h>                     // Library for keypad
#include "pitches.h"                    // File containing the tones
#include "Mario.h"                      // File containing melody A
#include "Pirates_of_the_Caribbeans.h"  // File containing melody B

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

/*.................................... Creating Object .........................................*/
Keypad customKeypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);  //Keypad Object

/*........................................ Runs once ............................................*/
void setup() {
  pinMode(buzzerPin, OUTPUT);    //buzzer pin definition
  Serial.begin(9600);            //Start the Serial Monitor
  tone(buzzerPin, NOTE_A5, 40);  // 40 ms of tone to check if the buzzer is functional
}

/*....................................... Main logic ............................................*/
void loop() {
  char key = customKeypad.getKey();  // Store the value of the key pressed

  if (key) {  // When a key is pressed prints on the serial monitor the key pressed to ease troubleshooting
    Serial.print("Key pressed: ");
    Serial.println(key);
  }
  if (key == 'A') { // When A is presssed on the keypad, plays melodyA
    melodyA();
  }
  if (key == 'B') { // When B is presssed on the keypad, plays melodyB
    melodyB();
  }
  switch (key) {
    case '1':  // When 1 is presssed on the keypad, plays tone A4
      tone(buzzerPin, NOTE_A4, 40);
      break;
    case '2':  // When 2 is presssed on the keypad, plays tone B4
      tone(buzzerPin, NOTE_B4, 40);
      break;
    case '3':  // When 3 is presssed on the keypad, plays tone C4
      tone(buzzerPin, NOTE_C4, 40);
      break;
    case '4':  // When 4 is presssed on the keypad, plays tone D4
      tone(buzzerPin, NOTE_D4, 40);
      break;
    case '5':  // When 5 is presssed on the keypad, plays tone E4
      tone(buzzerPin, NOTE_E4, 40);
      break;
    case '6':  // When 6 is presssed on the keypad, plays tone F4
      tone(buzzerPin, NOTE_F4, 40);
      break;
    case '7':  // When 7 is presssed on the keypad, plays tone G4
      tone(buzzerPin, NOTE_G4, 40);
      break;
    case '8':  // When 8 is presssed on the keypad, plays tone A5
      tone(buzzerPin, NOTE_A5, 40);
      break;
    case '9':  // When 9 is presssed on the keypad, plays tone B5
      tone(buzzerPin, NOTE_B5, 40);
      break;
    case '0':  // When 0 is presssed on the keypad, plays tone C5
      tone(buzzerPin, NOTE_C5, 40);
      break;
  }
}