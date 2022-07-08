
#include "pitches.h"

int analogpin[6]={A0,A1,A2,A3,A4,A5};
int buzpin=8;
int threshold=70;
int duracao_bipe = 50;
void setup()
{
Serial.begin(9600);
}

void loop()
{
if(analogRead(analogpin[0])>threshold)
{
Serial.println("A0");
Serial.println("Bumbo");
tone(buzpin, NOTE_C1,duracao_bipe);
}
if (analogRead(analogpin[1])>threshold)
{
Serial.println("A1");
Serial.println("Caixa");
tone(buzpin, NOTE_D1,duracao_bipe);
}
if (analogRead(analogpin[2])>threshold)
{
Serial.println("A2");
Serial.println("TOM 1");
tone(buzpin, NOTE_C2,duracao_bipe);
}
if (analogRead(analogpin[3])>threshold)
{
Serial.println("A3");
Serial.println("TOM 2");
tone(buzpin, NOTE_A1,duracao_bipe);
}
if (analogRead(analogpin[4])>threshold)
{
Serial.println("A4");
Serial.println("TOM 3");
tone(8, NOTE_F1,duracao_bipe);
}
if (analogRead(analogpin[5])>threshold)
{
Serial.println("A5");
Serial.println("RIDE");
tone(buzpin, NOTE_D_SUS_2,duracao_bipe);
}

}
