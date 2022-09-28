# Entradas digitales Pulsadores




En esta práctica tenemos que programar utilizando pulsador y cambiando la programacion .

1.	[Materiales](#materiales)
	
2.	[Esquema eléctrico](pulsador1.png)
3.    [Programación en Arduino](#arduino)
   
4.    [Esquema eléctrico](pulsador2.png)
5.    [Programación en Arduino](#arduinodos)

6.    [Esquema eléctrico](pulsador3.png)
7.    [Programación en Arduino](#arduinotres)

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


### Arduino 

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

### Arduinodos 

```
/*
	
	Segundo programa que al presionar el pulsador mantiene encendido el led hasta que vuelva
	a presionarse para apagarse.

	Autor:  dmensi

     simular https://www.tinkercad.com/things/0cWJk7p4Jt7?sharecode=aEdrD4DAL7dAbNCpS0_6sW6iMnnUz18F6t-7lEHmWto

*/

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


[Descarga el código para Arduino pulsador mantiene encendido](Arduino/pulsador_mantiene_encendido)

<br />
<hr>
<br />


### Arduinotres  

```

/*

	Tercer programa que al presionarse el pulsador enciende LED por 5 segundos y luego
	apaga solo.

	Autor:dmensi

    Actividad: https://www.tinkercad.com/things/gb0HKUHM2n7?sharecode=QGFMkSWSGsw4kN1dhWI2le8HverUN9tOBViiAIUj-JY

*/


int PULSADOR = 2; 
int LED=3; 

void setup(){ 

pinMode(PULSADOR, INPUT); 
pinMode(LED, OUTPUT); 
digitalWrite(LED, LOW);

 } 

void loop (){ 

while(digitalRead(PULSADOR) == LOW){ 	// espera infinitamente hasta que se presione el pulsador
 }

digitalWrite(LED, HIGH);		// enciende LED
delay(5000); 				// espera de 5 seg.
digitalWrite(LED, LOW); 		// apaga LED

while(digitalRead(PULSADOR) == HIGH){ 	// espera como funcion antirebote simple
 }

}

```

<br/>  <br/>

[Descarga el código para Arduino pulsador mantiene encendido 5 segundos ](Arduino/pulsador5seg.ino)



### Simular
<br />
<hr>
<br />
[simulador de circuitos pulsador mas led  ](https://www.tinkercad.com/things/k9RTlBlwo6B?sharecode=hYScllpfCzu0t4QKINiqQxygBKE9eoqV7HamNUPYfPA) 
<br />
<hr>
<br />
[simulador de circuitos mantiene encendido el led ](https://www.tinkercad.com/things/0cWJk7p4Jt7?sharecode=aEdrD4DAL7dAbNCpS0_6sW6iMnnUz18F6t-7lEHmWto) <br />   <br />

[simulador de circuitos 5segundos ](https://www.tinkercad.com/things/gb0HKUHM2n7?sharecode=QGFMkSWSGsw4kN1dhWI2le8HverUN9tOBViiAIUj-JY)<br />


<br />
<hr>
<br />

