/*
	
	Primer programa que permite al presionar un pulsador que encienda un led, al soltar el mismo
	se apaga.

	Autor: dmensi

*/


void setup() {

pinMode(2, INPUT);	// pin 2 como entrada 
pinMode(3, OUTPUT);	// pin 3 como salida 

} 

void loop() {

if (digitalRead(2) == HIGH)	// evaluo si la entrada esta en nivel alto
{ 
	digitalWrite(3,HIGH);	// pulsador presionado, encender LED
} 
else 
{ 
	digitalWrite(3,LOW); 	// pulsador no presionado, apagar LED
}
 
}