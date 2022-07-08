
#include "pitches.h"

int analogpin[6]={A0,A1,A2,A3,A4,A5};
int buzpin=8;
int threshold=70;
int saida
int duracao_bipe = 100;
void setup()
{
Serial.begin(9600);
}

void loop()
{
if(analogRead(analogpin[0])>threshold)
{
Serial.println("A0");
tone(buzpin, NOTE_G3,duracao_bipe);
}
if (analogRead(analogpin[1])>threshold)
{
Serial.println("A1");
tone(buzpin, NOTE_D4,duracao_bipe);
}
if (analogRead(analogpin[2])>threshold)
{
Serial.println("A2");
tone(buzpin, NOTE_C4,duracao_bipe);
}
if (analogRead(analogpin[3])>threshold)
{
Serial.println("A3");
tone(buzpin, NOTE_G4,duracao_bipe);
}
if (analogRead(analogpin[4])>threshold)
{
Serial.println("A4");
tone(8, NOTE_D3,duracao_bipe);
}
if (analogRead(analogpin[5])>threshold)
{
Serial.println("A5");
tone(buzpin, NOTE_G3,duracao_bipe);
}

}
