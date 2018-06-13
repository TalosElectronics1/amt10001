#include <Arduino.h> //Permite utilizar los comandos de Arduino
#include "AMT1001.h"

AMT1001::AMT1001(int humedad,int temperatura)
{
  humPin=humedad;
  tempPin=temperatura;
  
}
float AMT1001::Humedad()
{
	float H;
	float val_A;
	val_A=analogRead(humPin);
	H = 0.163 * val_A;//RH10 = val + 6*val/10 + 3*val/100; = 0.163*val
	return(H);
}

float AMT1001::Temperatura()
{
	float Temp;
	float val_A;
	val_A=analogRead(tempPin);
	Temp = log(10000.0*((1024.0/val_A-1)));//se uso una resistencia de 10k =10000 ohmios
	Temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp * Temp ))* Temp );
	Temp = Temp - 273.15; // Convertir de Kelvin a Celcius
	return Temp;
}
