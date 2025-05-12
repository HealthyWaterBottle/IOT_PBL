#define buzzerPin 11

int d1 = 25;
int d2 = 125;

/*..................................... melodyA .............................................*/
void melodyA() {
  tone(buzzerPin, NOTE_E5, d2);  // plays a tone for a given amount of time
  delay(d2);                     // delay it isolates the tone
  noTone(buzzerPin);             // no tone
  delay(d1);                     // delay isolates the tone more
                                 // repeat for every tone of the melody
  tone(buzzerPin, NOTE_E5, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_E5, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_C5, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_E5, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_G5, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d2);

  tone(buzzerPin, NOTE_G4, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d2);

  tone(buzzerPin, NOTE_C5, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_G4, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_E4, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_A4, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_B4, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_AS4, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_A4, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_G4, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_E5, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_G5, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_A5, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_F5, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_G5, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_E5, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_C5, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_D5, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);

  tone(buzzerPin, NOTE_B4, d2);
  delay(d2);
  noTone(buzzerPin);
  delay(d1);
}