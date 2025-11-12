//Project: Once upon a time
//Team Members: John Madewell, Aarohan Deoja, Aiden Cerna 

#include <Servo.h>

//Assigning Buttons
const int FirstButtonPin = 1;
const int SecondButtonPin = 2;
const int ThirdButtonPin = 3;
const int FourthButtonPin = 4;
const int FifthButtonPin = 5;

//Assigning Servos
Servo FirstServo;
Servo SecondServo;
Servo ThirdServo;
Servo FourthServo;
 

//Assigning LED
const int ledPin = 13;

//Assignig Button Val
int FirstButtonVal;
int SecondButtonVal;
int ThirdButtonVal;
int FourthButtonVal;
int FifthButtonVal;

void setup(){
//Setup code here, runs once

pinMode(FirstButtonPin, INPUT);
pinMode(SecondButtonPin, INPUT);
pinMode(ThirdButtonPin, INPUT);
pinMode(FourthButtonPin, INPUT);
pinMode(FifthButtonPin, INPUT);
pinMode(ledPin, OUTPUT);

//Attaches the servo to pins
FirstServo.attach(9); //attaches the servo on pin one
SecondServo.attach(10); //attaches the servo on pin two
ThirdServo.attach(11); //attaches the servo on pin three
FourthServo.attach(12); //attaches the servo on pin four
}

void loop() {
//Main code goes here

//First button activates first servo
FirstButtonVal = digitalRead(FirstButtonPin);

if (FirstButtonVal == LOW) {
  //Turn on first servo
  FirstServo.write(180); //tells the servo what angle to write 0 to 180
  } else {
    //Turn off first servo
    FirstServo.write(0);
    }

//Second button rotates second servo
SecondButtonVal = digitalRead(SecondButtonPin);

if (SecondButtonVal == HIGH){
  //Turn on second servo
  SecondServo.write(180);
  } else {
    //Turn off second servo
    SecondServo.write(0);
    }

//Third button turns on led
ThirdButtonVal = digitalRead(ThirdButtonPin);

if (ThirdButtonVal == HIGH) {
  //led on
  digitalWrite(ledPin, HIGH);
  } else {
    //led off
    digitalWrite(ledPin, LOW);
    }

//Fourth button continuously rotates third servo
FourthButtonVal = digitalRead(FourthButtonPin);

if (FourthButtonVal == HIGH) {
  //Turn on third servo
  ThirdServo.write(45);
  } else {
    //Turn off third servo
    ThirdServo.write(0);
    }

//Fifth button rotates fourth servo
FifthButtonVal = digitalRead(FifthButtonPin);

if (FifthButtonVal == HIGH) {
  //Turn on fourth servo
  FourthServo.write(45);
  } else {
    //Turn off fourth servo
    FourthServo.write(0);
    }

}
