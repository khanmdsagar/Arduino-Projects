#include <IRremote.h>

int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;

int state1=1;
int led1=8;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(led1,OUTPUT); 
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);    
    irrecv.resume(); // Receive the next value
  
    
    if(results.value == 0x38863BD2 )
    {
     digitalWrite(led1,state1);
     state1 = !state1; 
    }
  
  }   

}
