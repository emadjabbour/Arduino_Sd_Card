#include<SD.h>
#include<SPI.h>

File Emadtxt;

void setup() {
Serial.begin(9600);
if(!SD.begin(4)){
  Serial.println("SD card Faild");
  return;
}
Serial.println("SD card OK");
Emadtxt = SD.open("emad.txt",FILE_WRITE);
if(Emadtxt){
  Serial.println("writing on sd card");
  Emadtxt.println("test test emad emad ok");
  Emadtxt.close();
}
Emadtxt = SD.open("emad.txt");
if(Emadtxt){
while(Emadtxt.available()){
  Serial.write(Emadtxt.read());
}

 Emadtxt.close();
}
}

void loop() {

}
