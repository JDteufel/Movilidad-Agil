#include <Wire.h>

const int pinLED = 13;

void setup() {
  // Inicia la comunicación I2C, el pin y el monitor serial
  Wire.begin(8);  
  Wire.onReceive(receiveEvent);
  pinMode(pinLED, OUTPUT);
  Serial.begin(9600);
}

void receiveEvent(int howMany) {
  while (Wire.available()) {
    // Recibe el estado del LED (1 para ON, 0 para OFF)
    char estado = Wire.read();
    if (estado == 1) {
      digitalWrite(pinLED, HIGH);
      Serial.println("LED encendido");
    } else {
      digitalWrite(pinLED, LOW);
      Serial.println("LED apagado");
    }
  }
}

void loop() {
  // No es necesario hacer nada aquí, todo se maneja en receiveEvent
}
