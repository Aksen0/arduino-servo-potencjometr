#include <Servo.h>

Servo mojeSerwo;

int potencjometr = A0;
int wartosc = 0;
int kat = 0;

void setup() {
  mojeSerwo.attach(3);
}

void loop() {
  wartosc = analogRead(potencjometr);   // 0–1023
  kat = map(wartosc, 0, 1023, 0, 180);  // zamiana na 0–180

  mojeSerwo.write(kat); // ustawienie kąta
  delay(15); // małe opóźnienie dla stabilności
}