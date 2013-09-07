int pin = 13;
volatile int state = LOW;

void setup()
{
  pinMode(pin, OUTPUT);
  attachInterrupt(0, blink, RISING);
}

void loop()
{
  digitalWrite(pin, LOW);
}

void blink()
{
	while (digitalRead(2))
	{
		digitalWrite(pin, HIGH);
	}
}