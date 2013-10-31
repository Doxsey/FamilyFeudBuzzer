int blue_LEDpin = 13;
int red_LEDpin = 12;

volatile int state = LOW;

void setup()
{
pinMode(blue_LEDpin, OUTPUT);
pinMode(red_LEDpin, OUTPUT);
attachInterrupt(0, red_team, RISING);			//Starts INT0, calls the function red_team on a rising edge (Pin 2)
attachInterrupt(1, blue_team, RISING);		//Starts INT1, calls the function blue_team on a rising edge (Pin 3)
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
