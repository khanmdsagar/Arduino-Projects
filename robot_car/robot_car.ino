int pin2 = 2;
int pin3 = 3;

int pin4 = 4;
int pin5 = 5;

int pwm9 = 9;
int pwm10 = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);

  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);

  pinMode(pwm9, OUTPUT);
  pinMode(pwm10, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  if(Serial.available()>0){
    char data = Serial.read();

   //speed 
   if(data == '0'){
     analogWrite(pwm10, 0);
     analogWrite(pwm9, 0);
   }
     if(data == '1'){
     analogWrite(pwm10, 10);
     analogWrite(pwm9, 10);
   }
     if(data == '2'){
     analogWrite(pwm10, 20);
     analogWrite(pwm9, 20);
   }
     if(data == '3'){
     analogWrite(pwm10, 30);
     analogWrite(pwm9, 30);
   }
     if(data == '4'){
     analogWrite(pwm10, 40);
     analogWrite(pwm9, 40);
   }
     if(data == '5'){
     analogWrite(pwm10, 50);
     analogWrite(pwm9, 50);
   }
     if(data == '6'){
     analogWrite(pwm10, 60);
     analogWrite(pwm9, 60);
   }
     if(data == '7'){
     analogWrite(pwm10, 70);
     analogWrite(pwm9, 70);
   }
     if(data == '8'){
     analogWrite(pwm10, 80);
     analogWrite(pwm9, 80);
   }
     if(data == '9'){
     analogWrite(pwm10, 90);
     analogWrite(pwm9, 90);
   }
     if(data == 'q'){
     analogWrite(pwm10, 200);
     analogWrite(pwm9, 200);
   }

     //stop
    if(data == 'D'){
     digitalWrite(pin2, LOW);
     digitalWrite(pin3, LOW);
     digitalWrite(pin4, LOW);
     digitalWrite(pin5, LOW);
    }
    
   //Forward
    if(data == 'F'){
     digitalWrite(pin2, HIGH);
     digitalWrite(pin3, LOW);
     digitalWrite(pin4, HIGH);
     digitalWrite(pin5, LOW);
    }
    
  //Backward
    if(data == 'B'){
     digitalWrite(pin3, HIGH);
     digitalWrite(pin2, LOW);
     digitalWrite(pin5, HIGH);
     digitalWrite(pin4, LOW);
    }

    if(data == 'L'){
   //Left
     digitalWrite(pin2, HIGH);
     digitalWrite(pin3, LOW);
     
     digitalWrite(pin4, LOW);
     digitalWrite(pin5, LOW);
    }

    if(data == 'R'){
   //Right
     digitalWrite(pin2, LOW);
     digitalWrite(pin3, LOW);
     
     digitalWrite(pin4, HIGH);
     digitalWrite(pin5, LOW);
    }

     Serial.println(data);
  }

}
