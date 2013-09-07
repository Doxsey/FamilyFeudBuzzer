int pin = 13;
volatile int state = LOW;

void setup()
{
  pinMode(pin, OUTPUT);
  attachInterrupt(0, blink, RISING);		//Starts INT0, calls the function blink on a rising edge
}

void loop()
{
  digitalWrite(pin, LOW);
}

void blink()								//Interrupt service routine
{
	while (digitalRead(2))
	{
		digitalWrite(pin, HIGH);
	}
}