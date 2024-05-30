int Led = 13;      //define LED interface
int buttonpin = 3; //define magnetic ring sensor interface
int val;           //define digital variable val
void setup()
{
    pinMode(Led, OUTPUT);      //define LED as output interface
    pinMode(buttonpin, INPUT); //define magnetic ring sensor as output interface
}
void loop()
{
    val = digitalRead(buttonpin); // read and assign the value of digital interface 3 to val
    if (val == LOW)              //When a signal is detected by magnetic ring sensor, LED will flash
    {
    digitalWrite(Led, HIGH);
    }
    else
    {
    digitalWrite(Led, LOW);
    }
}