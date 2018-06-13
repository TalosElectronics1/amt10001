/*
 *Ing Rafael Lozano Rolon
 *rafa.lozano.rolon@gmail.com
 *www.taloselectronics.com
 *Fuente: http://www.gettingmyfeetwet.com/2014/04/arduino-on-breadboard-with-amt1001.html
 */

class AMT1001
{
private:
	float humedad = 0;
	float temperatura = 0;
	int humPin;
	int tempPin;

public:
	float Humedad();
	float Temperatura();
	AMT1001(int humedad,int temperatura);
	
	
};
