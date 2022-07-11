# Entradas digitales Pulsadores




En esta práctica tenemos que programar utilizando pulsador y cambiando la programacion .

1.	[Materiales](#materiales)
	
2.	[Esquema eléctrico](pulsador1.png)
3.    [Programación en Arduino](#arduino_uno)
   
4.    [Esquema eléctrico](pulsador2.png)
5.    [Programación en Arduino](#arduino_dos)

6.    [Esquema eléctrico](pulsador3.png)
7.    [Programación en Arduino](#arduino_tres)

8.    [Simulador de circuitos](#simular)


***



### Materiales

Para llevar a cabo la práctica, vamos a necesitar los siguientes materiales:
- 1 Placa de Arduino UNO
- 1 Protoboard
- 4 latiguillos
- 2 resistencias
- 1 pulsador
- 1 diodo led





<br />
<hr>
<br />


### Arduino uno 

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
<br />
<hr>
<br />

[Descarga el código para Arduino](Arduino/pulsador_mas_led1.ino)

<br />
<hr>
<br />

### Arduino dos 

```
int PULSADOR = 2; 
int LED=3; 
int ESTADO=LOW; 

void setup(){ 

pinMode(PULSADOR, INPUT); 
pinMode(LED, OUTPUT); 
digitalWrite(LED, LOW);

 } 

void loop (){ 

while(digitalRead(PULSADOR) == LOW){ 	// espera infinitamente hasta que se presione el pulsador
 }

ESTADO = digitalRead(LED); 		// leo estado del LED para saber si esta encendido o apagado
digitalWrite(LED, !ESTADO); 		// escribo en la salida el valor apuesto al leido con anterioridad

while(digitalRead(PULSADOR) == HIGH){ 	// espera como funcion antirebote simple
 }

}
```
<br />
<hr>
<br />


[Descarga el código para Arduino](Arduino/pulsador_mantiene_encendido)

<br />
<hr>
<br />

### Simular

[simulador de circuitos pulsador mas led  ](https://www.tinkercad.com/things/k9RTlBlwo6B?sharecode=hYScllpfCzu0t4QKINiqQxygBKE9eoqV7HamNUPYfPA)
[simulador de circuitos mantiene encendido el led ] (https://www.tinkercad.com/things/0cWJk7p4Jt7?sharecode=aEdrD4DAL7dAbNCpS0_6sW6iMnnUz18F6t-7lEHmWto)


<br />
<hr>
<br />

