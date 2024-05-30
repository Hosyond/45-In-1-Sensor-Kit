int digitalPin = 7;   // KY-037 digital interface
int analogPin = A0;   // KY-037 analog interface
int ledPin = 13;      // Arduino LED pin
int digitalVal;       // digital readings
int analogVal;        // analog readings

void setup()
{
  pinMode(digitalPin,INPUT); 
  pinMode(analogPin, INPUT);
  pinMode(ledPin,OUTPUT);      
  Serial.begin(9600);
}

void loop()
{
  // Read the digital inteface
  digitalVal = digitalRead(digitalPin); 
  
  if(digitalVal == HIGH) 
  {
    digitalWrite(ledPin, HIGH); // Turn ON Arduino's LED
  }
  else
  {
    digitalWrite(ledPin, LOW);  // Turn OFF Arduino's LED
  }

  // Read analog interface
  analogVal = analogRead(analogPin);
  // Print analog value to serial
  Serial.println(analogVal);  
}