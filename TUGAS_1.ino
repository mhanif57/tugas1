int i=0;
void setup() {
DDRC=00;
PORTC=05;

DDRB=15;
}

void loop() {
  if (digitalRead(A0)==LOW)
  {
    for (int led=i;led<=15;led++)
    PORTB=led;
    delay(1000);
  
  }
  else if (digitalRead(A1)==LOW)
  {
    for (int led=i;led<=15;led--)
    PORTB=led;
    delay(1000);
  }

  
   else if (digitalRead(A2)==LOW)
  {
    PORTB=15;
    delay(1000);
    PORTB=00;
  }
  

}
