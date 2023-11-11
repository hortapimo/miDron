#include <Arduino.h>
#include "BluetoothSerial.h"
#include <iostream>


BluetoothSerial SerialBT;
void setup() {
  SerialBT.begin("ESP32test"); 
  Serial.begin(115200);
}

void loop() {

  if (SerialBT.available()){
    Serial.println(char(SerialBT.read()));
  }

}
