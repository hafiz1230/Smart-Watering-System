  /*
  Made on Hafiz
*/

//void setup() {
//  Serial.begin(9600);
//  pinMode(3, INPUT);
//  pinMode(A0, INPUT);
//}


//void loop() {
//  Serial.print(digitalRead(3) * 5); Serial.print("\t");
//  Serial.println(analogRead(A0) * 5 / 1024);
//  delay(200);
//}

//void loop() {
//  Serial.print(digitalRead(3)); Serial.print("\t");
//  Serial.println(analogRead(A0));
//  delay(200);
//}

//
//
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
 
void setup() {
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
  lcd.clear();
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
  delay(1000);
  lcd.setCursor(0, 0);
  lcd.print("IRRIGATION");
  lcd.setCursor(0, 1);
  lcd.print("SYSTEM IS ON ");
    lcd.print("");
    delay(3000);
  lcd.clear();
}

 
void loop() {
  int value = analogRead(A0);
  int digvalue = digitalRead(3);
  
  Serial.println(digvalue);
  if (digvalue ==1) {
    digitalWrite(2, LOW);
    lcd.setCursor(0, 0);
    lcd.print("Valve is opened ");
  } else {
    digitalWrite(2, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("Valve is closed");
  }
 
  if (value < 400) {
    lcd.setCursor(0, 1);
    lcd.print("Moisture : HIGH");
  } else if (value > 400 && value < 850) {
    lcd.setCursor(0, 1);
    lcd.print("Moisture : MID ");
  } else if (value > 850) {
    lcd.setCursor(0, 1);
    lcd.print("Moisture : LOW ");
  }
}









#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
 
void setup() {
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
  lcd.clear();
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
  delay(1000);
  lcd.setCursor(0, 0);
  lcd.print("IRRIGATION");
  lcd.setCursor(0, 1);
  lcd.print("SYSTEM IS ON ");
    lcd.print("");
    delay(3000);
  lcd.clear();
}

 
void loop() {
  int value = analogRead(A0);
  int digvalue = digitalRead(3);
  
  Serial.println(digvalue);
  if (digvalue == 1) {
    digitalWrite(2, LOW);
    lcd.setCursor(0, 0);
    lcd.print("Valve is opened ");
  } else {
    digitalWrite(2, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("Valve is closed");
  }
 
  if (value < 400) {
    lcd.setCursor(0, 1);
    lcd.print("Moisture : HIGH");
  } else if (value > 400 && value < 850) {
    lcd.setCursor(0, 1);
    lcd.print("Moisture : MID ");
  } else if (value > 850) {
    lcd.setCursor(0, 1);
    lcd.print("Moisture : LOW ");
  }
}
