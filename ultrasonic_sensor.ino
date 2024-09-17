#include <SoftwareSerial.h>

const int trigpin=12;
const int echopin=11;
long duration,inches,distance;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
Serial.print("Distance Measurement");
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
 pinMode(trigpin, OUTPUT);
 digitalWrite(trigpin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigpin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigpin, LOW);

 pinMode(echopin, INPUT);
 duration=pulseIn(echopin, HIGH);
 distance=duration*0.034/2;
 Serial.print("Distance:");
 Serial.print(distance);
 Serial.print("cm");
 delay(100);
 Serial.println();
 
}
