int sensorPin = 2;
int value = 0;
int maxValue = 1023; // The maximum value returned by Arduino's analogRead function

void setup() {
  Serial.begin(9600);
}

void loop() {
  value = analogRead(sensorPin);
  // Invert ADC value
  value = maxValue - value;
  // You can invert it if you want
  // value = -value + maxValue;
  
  Serial.println(value, DEC);
  delay(50);
}