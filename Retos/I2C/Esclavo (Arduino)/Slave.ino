#include <Wire.h>

const int pinLED = 13;  // El pin donde está conectado el LED (en este caso el LED interno)

void setup() {
  Wire.begin(8);  // Inicia I2C con dirección esclavo 8
  Wire.onReceive(receiveEvent);  // Se llama cuando se recibe un dato
  pinMode(pinLED, OUTPUT);  // Configura el LED como salida
  Serial.begin(9600);  // Inicia la comunicación serie para depuración
}

void receiveEvent(int howMany) {
  while (Wire.available()) {
    // Recibe el estado del LED (1 para ON, 0 para OFF)
    char estado = Wire.read();
    if (estado == 1) {
      digitalWrite(pinLED, HIGH);  // Enciende el LED
      Serial.println("LED encendido");
    } else {
      digitalWrite(pinLED, LOW);  // Apaga el LED
      Serial.println("LED apagado");
    }
  }
}

void loop() {
  // No es necesario hacer nada aquí, todo se maneja en receiveEvent
}