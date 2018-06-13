#include "AMT1001.h"
AMT1001 Sensor(0,1);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Humedad:");
  Serial.print(Sensor.Humedad());
  
  Serial.print("\t");

  Serial.print("Temperatura:");
  Serial.println(Sensor.Temperatura());
  delay(100);

}
