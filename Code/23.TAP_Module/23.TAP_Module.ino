    int Led=13;//define LED interface
    int Shock=3;//define knock sensor interface
    int val;//define digital variable val
    void setup()
    {
    pinMode(Led,OUTPUT);//define LED to be output interface
    pinMode(Shock,INPUT);//define knock sensor to be output interface
    }
    void loop()
    {
    val=digitalRead(Shock);//read the value of interface3 and evaluate it to val
    if(val==HIGH)//when the knock sensor detect a signal, LED will be flashing
    {
    digitalWrite(Led,LOW);
    }
    else
    {
    digitalWrite(Led,HIGH);
    }
    }