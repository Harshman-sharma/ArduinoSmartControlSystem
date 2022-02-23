#include<SoftwareSerial.h>
SoftwareSerial mySerial(2,3);

#define TV 8
#define AC 9
#define WM 10
#define FRIDGE 11

String received;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600); 
  
  pinMode(TV,OUTPUT);
  pinMode(AC,OUTPUT);
  pinMode(WM,OUTPUT);
  pinMode(FRIDGE,OUTPUT);

  digitalWrite(TV,LOW);
  digitalWrite(AC,LOW);
  digitalWrite(WM,LOW);
  digitalWrite(FRIDGE,LOW);
  }

void loop() {
  if (mySerial.available())
  {
    received = mySerial.readString();
    Serial.println(received);
  }


  else if( received=="TV on"||received=="television on")
  {
    
    digitalWrite(TV, LOW);
    
  }

  else if( received=="TV off" ||received=="television off")
  {
    
    digitalWrite(TV, HIGH);
    
  }

  else if( received=="AC on" ||received=="AC on")
  {
   
    digitalWrite(AC, LOW);
    
  }
  
  else if( received=="AC off" )//||received=="ir condiyioner off")
  {
    
    digitalWrite(AC, HIGH);
   
  }

  else if( received=="WM on" ||received=="washing machine on")
  {
    
    digitalWrite(WM, LOW);
    
  }
  else if(received=="WM off" ||received=="washing machine off")
  {
    
    digitalWrite(WM, HIGH);
    
  }
    
  else if(received=="fridge on" ||received == "refrigeator on")
  {
    
    digitalWrite(FRIDGE, LOW);
   
  }
  else if( received=="fridge off" ||received == "refrigeator off")
  {
    
    digitalWrite(FRIDGE, HIGH);
    
  }
}
