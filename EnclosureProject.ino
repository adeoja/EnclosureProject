//Project: Once upon a time
//Team Members: John Madewell, Aarohan Deoja, Aiden Cerna 

#include <Servo.h>

//Assigning Buttons
const int FirstButtonPin = 2;
const int SecondButtonPin = 3;
const int ThirdButtonPin = 4;
const int FourthButtonPin = 5;
const int FifthButtonPin = 6;

//Assigning Servos
Servo FirstServo;
Servo SecondServo;
Servo ThirdServo;
Servo FourthServo;
 
//Assigning LED
const int AlarmLedPin = 7;
const int BatmanLedPin = 8;

//Assignig Button Val,
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
pinMode(AlarmLedPin, OUTPUT);
pinMode(BatmanLedPin, OUTPUT);

//Attaches the servo to pins
FirstServo.attach(9); //attaches the servo on pin one
SecondServo.attach(10); //attaches the servo on pin two
ThirdServo.attach(11); //attaches the servo on pin three
FourthServo.attach(12); //attaches the servo on pin four
}

void loop() {
//Main code goes here
//FirstServo.write(180);
//ThirdServo.write(45);
    digitalWrite(AlarmLedPin, HIGH);
    digitalWrite(BatmanLedPin, HIGH);

//First button activates first servo
FirstButtonVal = digitalRead(FirstButtonPin);

if (FirstButtonVal == HIGH) {
  //Turn on first servo
  FirstServo.write(180); //tells the servo what angle to write 0 to 180
  
  //Flashing led

    digitalWrite(AlarmLedPin, HIGH);
    delay(500);
    digitalWrite(AlarmLedPin, LOW);
    delay(300);

    digitalWrite(AlarmLedPin, HIGH);
    delay(500);
    digitalWrite(AlarmLedPin, LOW);
    delay(300);

    digitalWrite(AlarmLedPin, HIGH);
    delay(500);
    digitalWrite(AlarmLedPin, LOW);
    delay(300);

    digitalWrite(AlarmLedPin, HIGH);
    delay(500);
    digitalWrite(AlarmLedPin, LOW);
    delay(300);

    digitalWrite(AlarmLedPin, HIGH);
    delay(500);
    digitalWrite(AlarmLedPin, LOW);
    delay(300);

  } else {
    //Turn off first servo
    FirstServo.write(0);
    digitalWrite(AlarmLedPin, LOW);
    }

//Second button rotates second servo
SecondButtonVal = digitalRead(SecondButtonPin);

if (SecondButtonVal == HIGH){
  //Turn on second servo
  SecondServo.write(45);
  } else {
    //Turn off second servo
    SecondServo.write(86);
    }

//Third button turns on led
ThirdButtonVal = digitalRead(ThirdButtonPin);

if (ThirdButtonVal == HIGH) {
  //led on
  digitalWrite(BatmanLedPin, HIGH);
  } else {
    //led off
    digitalWrite(BatmanLedPin, LOW);
    }

//Fourth button continuously rotates third servo
FourthButtonVal = digitalRead(FourthButtonPin);

if (FourthButtonVal == HIGH) {
  //Turn on third servo
    ThirdServo.write(45);
  } else {
    //Turn off third servo
    ThirdServo.write(85);
    }

//Fifth button rotates fourth servo
FifthButtonVal = digitalRead(FifthButtonPin);

if (FifthButtonVal == HIGH) {
  //Turn on fourth servo
  FourthServo.write(180);
  } else {
    //Turn off fourth servo
    FourthServo.write(0);
    }

}
