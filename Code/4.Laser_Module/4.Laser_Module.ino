void setup() {
pinMode(9, OUTPUT);
}

void loop() {
digitalWrite(9, HIGH);
delay(300);

digitalWrite(9, LOW);
delay(700);
}