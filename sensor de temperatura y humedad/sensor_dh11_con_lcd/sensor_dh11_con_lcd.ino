#include <DHT11.h> //cargamos la librería DHT
int pin=2; //Seleccionamos el pin en el que se //conectará el sensor
DHT11 dht11(pin); //Se selecciona el DHT11 (hay //otros DHT)
#include  <LiquidCrystal_I2C.h>
#include <LiquidCrystal.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
Serial.begin(9600); //Se inicia la comunicación serial
lcd.backlight();// prendemos la luz de fondo 
lcd.begin(16,2);// iniciamos lcd

}
void loop() {
float temp, hum;   
int err;
lcd.clear();
if((err=dht11.read(hum, temp))==0)
  {
    Serial.print("Temperatura: ");
    lcd.setCursor(0,0);// cursor 
    lcd.print("temperatura");
    lcd.print(temp);
    Serial.print(temp);
    lcd.setCursor(0,1);//salto de linea 
    lcd.print("humedad:");
    Serial.print(" Humedad: ");
    lcd.print(hum);
    
    Serial.print(hum);
    Serial.println();
  }
       else
          {
             Serial.println();
             Serial.print("Error Num :");
             Serial.print(err);
             Serial.println();
          }
          delay(1000); 
}
