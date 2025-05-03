#include <ezBuzzer.h>  // Library for a passive buzzer (Not used yet)
#include <Keypad.h>    // Library for keypad

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

//Runs once
void setup() {
  Serial.begin(9600);  //Start the Serial Monitor
}
/*.......................................................................................*/
//Main logic
void loop() {
  char key = customKeypad.getKey();

  if (key) {
    Serial.print("Key pressed: ");
    Serial.println(key);
  }
}