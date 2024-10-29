#include <WiFi.h>
#include <PubSubClient.h>
#include <DHT.h>
#include <TinyGPS++.h>
#include <HardwareSerial.h>

// Configuración de Wi-Fi
const char* ssid = "Juan David";
const char* password = "12345678";

// Configuración de Adafruit IO (MQTT)
const char* mqttServer = "io.adafruit.com";
const int mqttPort = 1883;
const char* mqttUser = "J0hanP";
const char* mqttPassword = "aio_GlKT75ctCTwJtUCuZF4yA6k2R1Pg";

// Feed de Adafruit IO para el DHT11 y el GPS
const char* tempFeed = "J0hanP/feeds/temperatura";
const char* humFeed = "J0hanP/feeds/humedad";
const char* latFeed = "J0hanP/feeds/latitud";
const char* lonFeed = "J0hanP/feeds/longitud";

// Configuración del DHT11
#define DHTPIN 23     // Pin GPIO al que está conectado el DHT11
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
HardwareSerial gpsSerial(2);

#define RXD2 16
#define TXD2 17

// Configuración del GPS NEO-6M
TinyGPSPlus gps;
HardwareSerial SerialGPS(1);  // Usaremos el puerto serial 1 para el GPS

WiFiClient espClient;
PubSubClient client(espClient);

void setup() {
  Serial.begin(115200);

  // Inicializar Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Conectando a WiFi...");
  }
  Serial.println("Conectado a la red Wi-Fi");

  // Configuración del cliente MQTT
  client.setServer(mqttServer, mqttPort);


  while (!client.connected()) {
    Serial.println("Conectando al servidor MQTT...");
    if (client.connect("ESP32Client", mqttUser, mqttPassword)) {
      Serial.println("Conectado al servidor MQTT");
    } else {
      Serial.print("Fallo al conectar. Estado: ");
      Serial.println(client.state());
      delay(10000);
    }
  }

  // Inicializar DHT11
  dht.begin();

  // Configurar el puerto serial para el GPS
  SerialGPS.begin(9600, SERIAL_8N1, RXD2, TXD2); // Pines 16 (RX) y 17 (TX)
}

void loop() {
  // Revisa la conexión MQTT
  if (!client.connected()) {
    while (!client.connected()) {
      Serial.println("Intentando reconectar al servidor MQTT...");
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

  // Leer datos del sensor DHT11
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  if (isnan(temp) || isnan(hum)) {
    Serial.println("Error al leer los datos del DHT11");
    return;
  }
// Publicar los datos del DHT11
  String tempStr = String(temp);
  String humStr = String(hum);
  client.publish(tempFeed, tempStr.c_str());
  client.publish(humFeed, humStr.c_str());

  Serial.print("Temperatura: ");
  Serial.print(tempStr);
  Serial.print(" °C | Humedad: ");
  Serial.print(humStr);
  Serial.println(" %");

  unsigned long start = millis();
  // Leer datos del GPS
  while (millis() - start < 1000) {
    while (gpsSerial.available() > 0) {
      gps.encode(gpsSerial.read());
    }
    if (gps.location.isUpdated()) {
      Serial.print("LAT: ");
      String latStr = String(gps.location.lat(), 6);
      String lonStr = String(gps.location.lng(), 6);
      Serial.println(latStr);
      Serial.print("LONG: "); 
      Serial.println(lonStr);
      Serial.print("SPEED (km/h) = "); 
      Serial.println(gps.speed.kmph()); 
      Serial.print("ALT (min)= "); 
      Serial.println(gps.altitude.meters());
      Serial.print("HDOP = "); 
      Serial.println(gps.hdop.value() / 100.0); 
      Serial.print("Satellites = "); 
      Serial.println(gps.satellites.value()); 
      Serial.print("Time in UTC: ");
      Serial.println(String(gps.date.year()) + "/" + String(gps.date.month()) + "/" + String(gps.date.day()) + "," + String(gps.time.hour()) + ":" + String(gps.time.minute()) + ":" + String(gps.time.second()));
      Serial.println("");

      client.publish(latFeed, latStr.c_str());
      client.publish(lonFeed, lonStr.c_str());
    }
  }
  delay(10000);
}