#include <SPI.h>
#include <SD.h>

File myFile;


void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);

  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  Serial.print("Initializing SD card...");

  if(!SD.begin(4)){
    Serial.println("Initializing failed!");
    while(1);
  }
  Serial.println("Initializing done.");

  if(SD.exists("example.txt")){
    Serial.println("example.txt exits.");
  }else{
    Serial.println("example.txt doesn't exist.");
  }

  Serial.println("Creating example.txt...");
  myFile = SD.open("example.txt", FILE_WRITE);
  myFile.write("Hello");
  Serial.println("Writing to file successful");
  myFile.close();
}

void loop(){
  
}
