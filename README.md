# sensor-hw-691-con-esp32

El sensor MLX90614 es un sensor de temperatura infrarrojo sin contacto que mide la temperatura de los objetos a distancia. Para utilizar el sensor MLX90614 con un ESP32 y Arduino, puedes seguir estos pasos:

    Instalar la librería Adafruit MLX90614:
        Abre el Arduino IDE.
        Ve a "Sketch" -> "Include Library" -> "Manage Libraries".
        Busca "Adafruit MLX90614" y haz clic en "Install".

    Conectar el MLX90614 al ESP32:
        Conecta VCC del MLX90614 a 3.3V del ESP32.
        Conecta GND del MLX90614 a GND del ESP32.
        Conecta SDA del MLX90614 al pin GPIO 21 del ESP32.
        Conecta SCL del MLX90614 al pin GPIO 22 del ESP32.

    Código Arduino:
