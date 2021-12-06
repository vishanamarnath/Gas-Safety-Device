#include <Servo.h>
Servo myservo; 
const byte ButtonPin = 3;  // Wire button between this pin and Ground
int SerVal = 0;
int val; 
int potpin = 0;
const byte Switch0 = 0;
int buzzer = 12;
int pos = 0;

void setup()
{
  pinMode(ButtonPin, INPUT_PULLUP);
  Serial.begin(9600);
 pinMode(buzzer, OUTPUT);
  myservo.attach(9); 
   myservo.write(0); 
}

void alarm1(){
Serial.println("Alarm");
tone(buzzer, 1800);
delay(300);
tone(buzzer, 1700);
delay(300);
tone(buzzer, 1800);
delay(400);
tone(buzzer, 1700);
delay(400);
tone(buzzer, 1800);
delay(500);
tone(buzzer, 1700);
delay(500);
tone(buzzer, 1800);
delay(600);
tone(buzzer, 1700);
delay(600);
tone(buzzer, 1800);
delay(999999);
 }

void loop()
{
  
byte Switch0 = digitalRead(ButtonPin); 
  
if(Switch0 == LOW)
{
 SerVal = "90";


 myservo.write(SerVal); 
//Serial.print("This is void loop");

  val = analogRead(potpin); 
 if(val>200)
  {

    
    myservo.write(0); 
     alarm1();
    exit(0); 
  }

 
}



else
{
 myservo.write(0); 
} 
 
}




 
  
