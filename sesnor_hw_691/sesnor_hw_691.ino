#include <Wire.h>
#include <Adafruit_MLX90614.h>

Adafruit_MLX90614 mlx = Adafruit_MLX90614();

void setup() {
  Serial.begin(115200);
  mlx.begin();
}

void loop() {
  Serial.print("Temperatura del objeto: ");
  Serial.print(mlx.readObjectTempC());
  Serial.println(" *C");

  Serial.print("Temperatura ambiente: ");
  Serial.print(mlx.readAmbientTempC());
  Serial.println(" *C");

  delay(2000);
}
