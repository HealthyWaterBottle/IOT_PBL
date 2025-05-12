#define buzzerPin 11
// different delays fo ease iof use
int delay1 = 600;
int delay2 = 200;
int delay3 = 50;

 
void melodyB() {
  tone(buzzerPin, NOTE_A3, delay2);  // plays a tone for a given amount of time
  delay(delay2);                     // delay it isolates the tone
  noTone(buzzerPin);                 // no tone
  delay(delay3);                     // delay isolates the tone more
                                     // repeat for every tone of the melody
  tone(buzzerPin, NOTE_C4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_D4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_D4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_D4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_E4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_F4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_F4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_F4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_G4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_E4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_E4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_D4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_C4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_C4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_D4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_A3, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_C4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_D4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_D4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_D4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_E4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_F4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_F4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_F4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_G4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_E4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_E4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_D4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_C4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_C4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_D4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_E4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_F4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_G4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_C5, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_B4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_A4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_G4, delay2);
  delay(delay2);
  noTone(buzzerPin);
  delay(delay3);

  tone(buzzerPin, NOTE_E4, delay1);
  delay(delay1);
  noTone(buzzerPin);
  delay(delay3);
}