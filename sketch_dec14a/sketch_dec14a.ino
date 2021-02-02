#include <LiquidCrystal.h>


const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int a;
float b;
void setup() {
 
  lcd.begin(16, 2);
 
  lcd.print("Temperature is");

Serial.begin(9600);
}
void loop() {
  a= analogRead(A0);
  b= ((5.0/1024.0)*a)*100;
  lcd.setCursor(0, 1);
  
  lcd.print(b);
  Serial.println(b);
}
