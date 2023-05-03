#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID " "
#define BLYNK_TEMPLATE_NAME " "
#define BLYNK_AUTH_TOKEN " "

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

char auth[]= BLYNK_AUTH_TOKEN;
char ssid[] = "";
char pass[] = "";

BlynkTimer timer;

BLYNK_WRITE(V0)
{
  int pinValue1 = param.asInt(); // assigning incoming value from pin V0 to a variable
  digitalWrite(12,pinValue1);
  lcd.setCursor(7,0);
  lcd.print(" ");
  lcd.setCursor(0,0);
  lcd.print("LED 1: ");
  lcd.print(pinValue1 == HIGH ? "ON" : "OFF");
}

BLYNK_WRITE(V1)
{
  int pinValue2 = param.asInt();
  digitalWrite(14,pinValue2);
  lcd.setCursor(7,1);
  lcd.print(" ");
  lcd.setCursor(0,1);
  lcd.print("LED 2: ");
  lcd.print(pinValue2 == HIGH ? "ON" : "OFF");
}

BLYNK_WRITE(V2)
{
  int pinValue3 = param.asInt();
  digitalWrite(13,pinValue3);
  lcd.setCursor(7,2);
  lcd.print(" ");
  lcd.setCursor(0,2);
  lcd.print("LED 3: ");
  lcd.print(pinValue3 == HIGH ? "ON" : "OFF");
}


void setup()
{
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(14,OUTPUT);
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

  lcd.init();
  lcd.backlight();

}

void loop()
{
  Blynk.run();
  timer.run();
}
