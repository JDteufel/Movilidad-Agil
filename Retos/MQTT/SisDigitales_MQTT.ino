#include <WiFi.h>
#include <PubSubClient.h>

// Configuración de Wi-Fi
const char* ssid = "Juan David";
const char* password = "12345678";

const int pinPot = 35;
int valorPot = 0;

// Configuración de Adafruit IO (MQTT)
const char* mqttServer = "io.adafruit.com";
const int mqttPort = 1883;
const char* mqttUser = "J0hanP";
const char* mqttPassword = "aio_GlKT75ctCTwJtUCuZF4yA6k2R1Pg";

// Feed de Adafruit IO
const char* topic = "J0hanP/feeds/recepcion";

WiFiClient espClient;
PubSubClient client(espClient);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Conectando a WiFi...");
  }
  Serial.println("Conectado a la red Wi-Fi");

  client.setServer(mqttServer, mqttPort);

  while (client.connected()) {
    Serial.println("Conectando al servidor MQTT...");
    if (client.connect("ESP32Client", mqttUser, mqttPassword)) {
      Serial.println("Conectado al servidor MQTT");
    } else {
      Serial.print("Fallo al conectar. Estado: ");
      Serial.println(client.state());
      delay(2000);
    }
  }
}

void loop() {
  valorPot = analogRead(pinPot);
  delay(1000);

  // Envía un dato cada 10 segundos
  if (!client.connected()) {
    while (!client.connected()) {
      Serial.println("Intentando reconectar...");
      if (client.connect("ESP32Client", mqttUser, mqttPassword)) {
        Serial.println("Reconexion exitosa");
      } else {
        Serial.print("Error de reconexión, estado: ");
        Serial.println(client.state());
        delay(2000);
      }
    }
  }
  client.loop();
  String mensaje = String(valorPot);
  client.publish(topic, mensaje.c_str());
  Serial.println("Dato enviado: " + mensaje);

 delay(100);
}