#include <Servo.h>
Servo servo;

double currentAngle = 180;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);

  servo.attach(2);

  
  servo.write(180);

  delay(1000);

  

  
  
  // tone(3,400);
  // delay(500);
  // tone(3, 800); 
  // delay(500);

  // noTone(3);

}

void loop() {
  // put your main code here, to run repeatedly:


if(currentAngle>5.1)
{
  currentAngle-=27;
   tone(3,400);
  delay(500);
  tone(3, 800); 
  delay(500);
  noTone(3);
  servo.write(currentAngle);
  if(currentAngle > 0){
    for (int i = 0; i < 24; i++) {
      delay(3600000);//needs to be 24 hr

    }
  }
  else{
    delay(2000); //keep 2 sec
    currentAngle = 180;
    servo.write(currentAngle);
    for (int i = 0; i < 24; i++) {
      delay(3600000);//needs to be 24 hr

    }
  }
}
// else{
  
//     currentAngle=180;
//      servo.write(currentAngle);
//      delay(2000);
//     }

    Serial.println(currentAngle);
  // tone(3,799);
  // delay(500);
  // tone(3,400);
  // delay(500);
  // tone(3,200);
  // delay(500);
}

