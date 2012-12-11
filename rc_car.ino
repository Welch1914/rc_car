/*
This program resembles a basic traffic light.
It cycles between 3 different coloured LEDs
and buzzes in between light changes.
*/
#include <Servo.h> 
 
 int forward=2; //Connect green LED to Digital Pin 9
 int backward=3; //Connect yellow LED to Digital Pin 10
 int left=4; //Connect red LED to Digital Pin 11 
 int right=5;//Connect the buzzer Pin to Digital Pin 8  

void setup() 
{  //start of setup
  pinMode(forward,OUTPUT);//Set Pin Mode as output
  pinMode(backward,OUTPUT);//Set ledPin as output 
  pinMode(left,OUTPUT);//Set ledPin as output 
  pinMode(right,OUTPUT);//Set ledPin as output  
}  //end of setup

void loop() 
{ 
// forward wheels turn right
 digitalWrite(right, HIGH); //Set green LED to high
 delay(1000);
 digitalWrite(right,LOW); //Set green LED to low 
    
 delay(1000); //Wait 1 second 
 
//rear wheels move foreward
 digitalWrite(forward,HIGH); //Set green LED to high 
 delay(1000);
 digitalWrite(forward,LOW); //Set green LED to high
 
 delay(1000); //Wait 1 second 
 
 digitalWrite(left,HIGH); //Set green LED to high
 delay(1000); 
 digitalWrite(left,LOW); //Set green LED to high 
 
 delay(1000); //Wait 1 second 
 
 //front wheels turn left
 digitalWrite(backward, HIGH); //Set green LED to high 
 delay(1000);
 digitalWrite(backward,LOW); //Set green LED to low 
   
 delay(1000); //Wait 1 second 
 //back wheels go backward
 
}//end of loop

