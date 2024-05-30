int led_pin = 13; // Define the LED interface
int switch_pin = 3; // Definition of mercury tilt switch sensor interface
int val; // Defines a numeric variable

void setup()
{
	pinMode(led_pin, OUTPUT);
	pinMode(switch_pin, INPUT);
}

void loop()
{
	val = digitalRead(switch_pin); // check mercury switch state
	if(val == HIGH)
	{
		digitalWrite(led_pin, HIGH);
	}
	else
	{
		digitalWrite(led_pin, LOW);
	}
}