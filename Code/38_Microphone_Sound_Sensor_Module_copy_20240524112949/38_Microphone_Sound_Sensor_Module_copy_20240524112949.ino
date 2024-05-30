// Arduino and KY-038 module
void setup ()
{
pinMode (13, OUTPUT); // built-in LED pin set to output
pinMode (8, INPUT); // module digital output connected to Arduino pin 8
Serial.begin(9600); // initialize serial
}
void loop ()
{
// display analog and digital values to serial
Serial.print("Analog pin: ");
Serial.print(analogRead(A0));
Serial.print(" | Digital pin: ");
if (digitalRead(8) == HIGH) {
Serial.println("High");
digitalWrite (13, HIGH); // if module value is higher than threshold,
// switch-On built-in LED
}
else {
Serial.println("Low");
digitalWrite (13, LOW);
}
}