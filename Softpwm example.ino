#include <Arduino.h>

void softanalogWrite(unsigned int number,int pin){
  digitalWrite(pin,1);
  delay(number/10);
  digitalWrite(pin,0);
  delay(5-number/10);
}

void setup(){
  pinMode(15,OUTPUT);
}

void loop(){
  for(int i = 0 ; i<=50 ;i++){
    softanalogWrite(i,15);
  }
}

