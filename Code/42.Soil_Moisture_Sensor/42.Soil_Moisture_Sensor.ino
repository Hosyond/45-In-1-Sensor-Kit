int rainPin = A0;
int ledPin = 13; 

// you can adjust the threshold value
int thresholdValue = 800;

void setup(){
  pinMode(rainPin, INPUT);
  pinMode(ledPin, OUTPUT);  // Set the LED pin as the output mode
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(rainPin);
  Serial.print(sensorValue);

  if(sensorValue < thresholdValue){
    Serial.println(" - Doesn't need watering");
    digitalWrite(ledPin, LOW);  // If you don't need to water, turn off the LED
  } else {
    Serial.println(" - Time to water your plant");
    // If you need to water, flash the LED quickly
    for(int i = 0; i < 5; i++){
      digitalWrite(ledPin, HIGH); 
      delay(100);                 
      digitalWrite(ledPin, LOW);   
      delay(100);                 
    }
    digitalWrite(ledPin, LOW);
  }
  delay(500);  //
}