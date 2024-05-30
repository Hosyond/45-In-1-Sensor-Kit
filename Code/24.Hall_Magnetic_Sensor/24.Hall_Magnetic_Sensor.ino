int led = 13;//LED pin
int sensor = 3; //sensor pin
int val; //numeric variable

void setup()
{
	pinMode(led, OUTPUT); //set LED pin as output
	pinMode(sensor, INPUT); //set sensor pin as input
}

void loop()
{
	val = digitalRead(sensor); //Read the sensor
	if(val == LOW) //when magnetic field is detected, turn led on
	{
		digitalWrite(led, HIGH);
	}
	else
	{
		digitalWrite(led, LOW);
	}
}