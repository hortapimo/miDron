#include <Arduino.h>
#include "BluetoothSerial.h"
#include "controlador.h"

BluetoothSerial SerialBT;
Controlador controlador;


void setup() {
  SerialBT.begin("ESP32test"); 
  Serial.begin(115200);
  controlador.iniciar();
  }

void loop() {

  if (SerialBT.available()){
    controlador.procesarComando(char(SerialBT.read()));
  }

}
