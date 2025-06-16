#include <LedControl.h>
#include <SoftwareSerial.h>
SoftwareSerial bluetooth(0, 1);
void setup() {
  pinMode(5, INPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
  bluetooth.begin(9600);
  // put your setup code here, to run once:

}

//루프들어가기전에 먼저 이모티콘 한번 띄워줘

void loop() {
  if(bluetooth.available()){
    aaa = bluetooth.read();
    if (aaa == '1'){
      //전화받았을 때 이모티콘
    }
    else if (aaa == '2'){
      //메세지 받았을 때 이모티콘
    }
    else if (aaa == '3'){
      //평상시 이모티콘
    }
  Serial.write(bluetooth.read());
 }
 
 if(Serial.available()){
   if (digitalRead(7) == HIGH){
     bluetooth.write('3');
   }
   else if (digitalRead(5) == HIGH){
     bluetooth.write('5');
   }
 }
  // put your main code here, to run repeatedly:

}
