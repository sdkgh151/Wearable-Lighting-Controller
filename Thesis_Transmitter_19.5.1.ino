
#include <SoftwareSerial.h>
#include <Wire.h>

int accelSensorPin1 = A2;
int accelSensorPin2 = A3;
int accelSensorPin3 = A4;

SoftwareSerial mySerial(2, 3); // RX, TX

void setup() {
 
  mySerial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() { 
 int accelSensorValue1=
 analogRead (accelSensorPin1);
 int accelSensorValue2=
 analogRead (accelSensorPin2);
 int accelSensorValue3=
 analogRead (accelSensorPin3);
 digitalWrite(LED_BUILTIN, HIGH);

 accelSensorValue1 += 1000;
 accelSensorValue2 += 2000;
 accelSensorValue3 += 3000;
 
 mySerial.print(accelSensorValue3);
 mySerial.print(" ");
 mySerial.print(accelSensorValue2); 
 mySerial.print(" ");
 mySerial.println(accelSensorValue1);
 
 delay(100);
  }
