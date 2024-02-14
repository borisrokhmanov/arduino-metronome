#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int bpm = 100; //change bpm here, use 0 < value < 200 for best results
String display = "BPM: "; //needed for lcd to work idk

void setup() {
  //initialize led and piezo pins
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  //initialize lcd and display bpm
  lcd.begin(16, 1);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(display + bpm);
}

//flashes led for duration dependent on bpm
void increment(int pin) {
  digitalWrite(pin, HIGH);
  delay(60000/bpm); // 60000 / 120 = 500ms = 0.5s delay = 120bpm
  digitalWrite(pin, LOW);
}

//flashes leds and beeps piezo one by one
void loop() {
  tone(9, 350, 300);
  increment(13);
  tone(9, 300, 300);
  increment(12);
  tone(9, 300, 300);
  increment(11);
  tone(9, 300, 300);
  increment(10);
  
}
