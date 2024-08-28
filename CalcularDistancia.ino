#include "Led.h"
#include "SensorUltrasonico.h"
#include "Controlador.h"

Led leds[] = { Led(14), Led(12), Led(5), Led(4), Led(2) };
unsigned int numLeds = sizeof(leds) / sizeof(leds[0]);
SensorUltrasonico sensor(23, 22);
Controlador esp(leds, numLeds, &sensor);

void setup() {
    Serial.begin(9600);
    esp.inicializarComponentes();
}

void loop() {
    esp.controlarLEDsSegunDistancia();
    esp.mostrarDistanciaConsola();
    delay(100);
}
