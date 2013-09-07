int blue_pin = 13;
int blue_pin = 13;

volatile int state = LOW;

void setup()
{
  pinMode(pin, OUTPUT);
  attachInterrupt(0, red_team, RISING);			//Starts INT0, calls the function red_team on a rising edge
  attachInterrupt(1, blue_team, RISING);		//Starts INT1, calls the function blue_team on a rising edge
}

void loop()
{
  digitalWrite(blue_pin, LOW);
  digitalWrite(red_pin, LOW);
}

void red_team()								//Interrupt service routine
{
	while (1)
	{
		digitalWrite(red_pin, HIGH);
	}
}

void blue_team()								//Interrupt service routine
{
	while (1)
	{
		digitalWrite(blue_pin, HIGH);
	}
}