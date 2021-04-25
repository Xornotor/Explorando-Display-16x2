#include <LiquidCrystal.h>

#define RS 2
#define EN 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7
int hora = 23, minuto = 59, segundo = 37;

LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  //IMPRESSÃO
  lcd.clear();
  lcd.setCursor(4, 0);
  if(hora < 10){
    lcd.print("0");  
  }
  lcd.print(hora);
  lcd.print(":");
  if(minuto < 10){
    lcd.print("0");  
  }
  lcd.print(minuto);
  lcd.print(":");
  if(segundo < 10){
    lcd.print("0");  
  }
  lcd.print(segundo);

  //CONTAGEM
  segundo++;
  if(segundo >= 60){
    segundo = 0;
    minuto++;  
  }
  if(minuto >= 60){
    minuto = 0;
    hora++;  
  }
  if(hora >= 24){
    hora = 0;  
  }
  delay(1000);
}
