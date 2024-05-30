int Led = 13; // define the LED Pin
int shock = 3; // define the sensor Pin 
int val; // define a numeric variable val 

void setup () {
	pinMode (Led, OUTPUT); // LED pin as output  
	pinMode (shock, INPUT); // input from KY-002 sensor
} 

void loop () {
	val = digitalRead (shock); // read the value from KY-002
	if (val == HIGH ) {// when sensor detects shock, LED flashes  
		digitalWrite(Led, LOW);
	} else {
		digitalWrite (Led, HIGH);
	}
}
