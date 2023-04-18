#include <LiquidCrystal.h>

// create lcd connections
const int rs = 12, e = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, e, d4, d5, d6, d7);

byte charger[8] = {
  0b01010,
	0b01010,
	0b11111,
	0b10001,
	0b10001,
	0b01110,
	0b00100,
	0b00100
};

byte music[8] = {
  0b00001,
	0b00011,
	0b00101,
	0b01001,
	0b01001,
	0b01011,
	0b11011,
	0b11000
};

byte volume[8] = {
  0b00001,
	0b00011,
	0b00111,
	0b11111,
	0b00111,
	0b00011,
	0b00001,
	0b00000
};

byte notification[8] = {
  0b00100,
	0b01110,
	0b01110,
	0b01110,
	0b11111,
	0b00000,
	0b00100,
	0b00000
};

byte heartOutline[8] = {
  0b01010,
	0b10101,
	0b10001,
	0b01010,
	0b00100,
	0b00000,
	0b00000,
	0b00000
};

byte heartFill[8] = {
  0b01010,
	0b11111,
	0b11111,
	0b01110,
	0b00100,
	0b00000,
	0b00000,
	0b00000
};

byte smiley[8] = {
  0b00000,
	0b00000,
	0b01010,
	0b00100,
	0b10001,
	0b01110,
	0b00000,
	0b00000
};

byte emptyBattery[8] = {
  0b00100,
	0b11111,
	0b10001,
	0b10001,
	0b10001,
	0b10001,
	0b11111,
	0b11111
};

byte quarterFullBattery[8] = {
  0b00100,
	0b11111,
	0b10001,
	0b10001,
	0b10001,
	0b11111,
	0b11111,
	0b11111
};

byte hallFullBattery[8] = {
  0b00100,
	0b11111,
	0b10001,
	0b10001,
	0b11111,
	0b11111,
	0b11111,
	0b11111
};

byte threeQtrsFullBattery[8] = {
  0b00100,
	0b11111,
	0b10001,
	0b11111,
	0b11111,
	0b11111,
	0b11111,
	0b11111
};


byte fullBattery[8] = {
  0b00100,
	0b11111,
	0b11111,
	0b11111,
	0b11111,
	0b11111,
	0b11111,
	0b11111
};

byte arrowUp[8] = {
	0b00100,
	0b01110,
	0b11111,
	0b00100,
	0b00100,
	0b00100,
	0b00100,
	0b00100
};

byte arrowDown[8] = {
	0b00100,
	0b00100,
	0b00100,
	0b00100,
	0b11111,
	0b01110,
	0b00100,
	0b00000
};

byte clock[8] = {
	0b00000,
	0b01110,
	0b10101,
	0b10101,
	0b10011,
	0b01110,
	0b00000,
	0b00000
};

byte fuel[8] = {
	0b01110,
	0b01010,
	0b01010,
	0b01110,
	0b01110,
	0b01110,
	0b11111,
	0b00000
};

void setup() {
  // initialize a 20x4 lcd
  lcd.begin(20, 4);

  // create a custom character
  lcd.createChar(1, charger);
  // create a custom character
  lcd.createChar(2, music);
  // create a custom character
  lcd.createChar(3, volume);
  // create a custom character
  lcd.createChar(4, notification);
  // create a custom character
  lcd.createChar(5, heartOutline);
  // create a custom character
  lcd.createChar(6, heartFill);
  // create a custom character
  lcd.createChar(7, smiley);
  // create a custom character
  lcd.createChar(8, volume);
  // create a custom character
  lcd.createChar(9, emptyBattery);
  // create a custom character
  lcd.createChar(10, quarterFullBattery);
  // create a custom character
  lcd.createChar(11, hallFullBattery);
  // create a custom character
  lcd.createChar(12, threeQtrsFullBattery);
  // create a custom character
  lcd.createChar(13, fullBattery);
  // create a custom character
  lcd.createChar(14, arrowUp);
  // create a custom character
  lcd.createChar(15, arrowDown);
  lcd.clear();
}

void loop() {
  // show the custom characters
  lcd.setCursor(0, 0);
  lcd.write(1);
  delay(15);
  // show the custom characters
  lcd.setCursor(2, 0);
  lcd.write(2);
  delay(15);
  // show the custom characters
  lcd.setCursor(4, 0);
  lcd.write(3);
  delay(15);
  // show the custom characters
  lcd.setCursor(6, 0);
  lcd.write(4);
  delay(15);
  // show the custom characters
  lcd.setCursor(8, 0);
  lcd.write(5);
  delay(15);
  // show the custom characters
  lcd.setCursor(10, 0);
  lcd.write(6);
  delay(15);
  // show the custom characters
  lcd.setCursor(12, 0);
  lcd.write(7);
  delay(15);
  // show the custom characters
  lcd.setCursor(14, 0);
  lcd.write(8);
  delay(15);
  // show the custom characters
  lcd.setCursor(16, 0);
  lcd.write(9);
  delay(15);
  // show the custom characters
  lcd.setCursor(18, 0);
  lcd.write(10);
  delay(15);
  // show the custom characters
  lcd.setCursor(20, 0);
  lcd.write(11);
  delay(15);
  // show the custom characters
  lcd.setCursor(0, 2);
  lcd.write(12);
  delay(15);
  // show the custom characters
  lcd.setCursor(2, 2);
  lcd.write(13);
  delay(15);
  // show the custom characters
  lcd.setCursor(4, 2);
  lcd.write(14);
  delay(15);
  // show the custom characters
  lcd.setCursor(6, 2);
  lcd.write(15);
  delay(15);
}
