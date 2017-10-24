int portaLed = 10;
int portaLDR = A5;

void setup()
{
  Serial.begin(9600);
  pinMode(portaLed, OUTPUT);
}

void loop()
{
  int estado = analogRead(portaLDR);
  
  Serial.println(estado);
  
  if (estado > 800)
  {
    digitalWrite(portaLed, HIGH);
  }
  else
  {
    digitalWrite(portaLed, LOW);
  }
}
