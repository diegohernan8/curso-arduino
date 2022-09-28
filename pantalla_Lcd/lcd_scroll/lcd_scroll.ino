#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

//Crear el objeto lcd  dirección  0x3F y 16 columnas x 2 filas
LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7); // DIR, E, RW, RS, D4, D5, D6, D7;  //

void setup() {
  lcd.setBacklightPin(3,POSITIVE);  // puerto P3 de PCF8574 como positivo
    lcd.setBacklight(HIGH);   // habilita iluminacion posterior de LCD
    lcd.begin(16, 2);     // 16 columnas por 2 lineas para LCD 1602A
    lcd.clear();      // limpia pantalla
  
  // Escribimos el Mensaje en el LCD en una posición  central.
  lcd.setCursor(0, 0);
  lcd.print("  aprendiendo robotica      );
  lcd.setCursor(0, 1);
  lcd.print("  LCD, Test de desplazamiento   ");
}

void loop() {
  //desplazamos una posición a la izquierda
  lcd.scrollDisplayLeft(); 
  delay(500);
}
