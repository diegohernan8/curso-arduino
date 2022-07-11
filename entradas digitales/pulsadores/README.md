# Entradas digitales Pulsadores




En esta práctica tenemos que programar utilizando pulsador y cambiando la programacion .

1.	[Materiales](#materiales)
	
2.	[Esquema eléctrico](pulsadorledencendido_programa2.png)

3.	[Programación en Arduino](#Arduino_programa_uno )

4.     [Circuito simulador](#Simular)


***



### Materiales

Para llevar a cabo la práctica, vamos a necesitar los siguientes materiales:
- 1 Placa de Arduino UNO
- 1 Protoboard
- 4 latiguillos
- 2 resistencias
- 1 pulsador
- 1 diodo led






### Arduino_programa_uno 

```


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


```


[Descarga el código para Arduino](Arduino/Capitulo3-Programa1.txt)

### Simular

[circuito simulador ](https://www.tinkercad.com/things/k9RTlBlwo6B?sharecode=hYScllpfCzu0t4QKINiqQxygBKE9eoqV7HamNUPYfPA)



<br />
<hr>
<br />

