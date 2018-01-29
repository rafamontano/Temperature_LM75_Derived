#include <Temperature_LM75_Derived.h>

TI_TMP102 temperature;

void setup() {
  while(!Serial) {}
  
  Serial.begin(9600);

  Wire.begin();
}

void loop() {
  Serial.print("t = ");
  Serial.println(temperature.readTemperatureF());

  delay(250);
}
