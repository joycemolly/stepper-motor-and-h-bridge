#include <Stepper.h>
 
const int stepsPerRevolution = 2048;  // change this to fit the number of steps per revolution
                                     // for your motor
 
// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8,9,10,11);            
 
void setup() {
  // set the speed at 60 rpm 、 setthemotorspeed in rotations per minute:
  myStepper.setSpeed(10); //4 turn per min
  // initialize the serial port:
  Serial.begin(9600);
}
 
void loop() {
  // step one revolution  in one direction:
   Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
 
  // step one revolution in the other direction:
 Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  
}

