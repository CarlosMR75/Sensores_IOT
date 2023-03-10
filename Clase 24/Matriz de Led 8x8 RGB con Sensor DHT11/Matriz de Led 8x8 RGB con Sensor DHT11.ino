#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include <String.h>

#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 13     // Pin digital conectado al sensor
#define DHTTYPE DHT11   // Tipo de sensor DHT
DHT dht(DHTPIN, DHTTYPE);

#define PIN            6
#define NUMPIXELS      64

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(8, 8, PIN,
  NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
  NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG,
  NEO_GRB            + NEO_KHZ800);

void setup() {
  Serial.begin(9600);

  matrix.begin();
  matrix.setTextWrap(false);
  matrix.setBrightness(50);
  matrix.setTextColor(matrix.Color(255, 0, 0));
}

void loop() {
    //float hum = dht.readHumidity();
  float tem = dht.readTemperature();
  Serial.print(tem);
  int valor = 12345;
    String cadena = "_Carlos DHT: ";
    String resultado = cadena + String(tem);
  // Desplazar el texto por la pantalla
  for (int i = 0; i < matrix.width() * resultado.length(); i++) {
    matrix.fillScreen(0);
    matrix.setCursor(-i, 0);
    matrix.print(resultado);
    matrix.show();
    delay(100);
  }
}
