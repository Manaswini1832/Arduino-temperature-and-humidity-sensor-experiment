#include <dht.h>
#include <LiquidCrystal.h>
#define dht_apin A0 // Analog Pin sensor is connected to
dht DHT;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup(){
 
  //Serial.begin(9600);
  //delay(500);//Delay to let system boot
  //Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  //delay(1000);//Wait before accessing Sensor
  pinMode(A0, INPUT);
  lcd.begin(16, 2);
}//end "setup()"
 
void loop(){
  //Start of Program 
    DHT.read11(dht_apin); 
    lcd.setCursor(0,0);
    lcd.print("Reading temp and");
    lcd.setCursor(0,1);
    lcd.print("humidity...");
    delay(2000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Temperature is ");
    lcd.setCursor(0, 1);
    lcd.print(DHT.temperature);
    lcd.print(" \337C");
    delay(2000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Humidity is ");
    lcd.setCursor(0, 1);
    lcd.print(DHT.humidity);
    lcd.print(" %");  
  delay(4000);//Wait 3 seconds before accessing sensor again.
}// end loop(
