#include "Controlador.h"

Controlador::Controlador(Led* leds,unsigned int numLeds, SensorUltrasonico* sensor){
  this->leds = leds;
  this->numLeds = numLeds;
  this->sensor = sensor;
}

void Controlador::inicializarComponentes() {
    for (unsigned int i = 0; i < numLeds; i++) {
        leds[i].inicializar();
    }
    sensor->inicializar();
}

void Controlador::controlarLEDsSegunDistancia() {
    float umbralDistancias[] = {100, 80, 60, 40, 20};
    float distancia = sensor->medirDistancia();

    unsigned int numeroUmbralDistancias = sizeof(umbralDistancias) / sizeof(umbralDistancias[0]);

    for (unsigned int i = 0; i < numLeds && i < numeroUmbralDistancias; i++) {
        if (distancia <= umbralDistancias[i]) {
            leds[i].encender();
        } else if (distancia > umbralDistancias[0]) {
            leds[i].apagar();
        }
    }
}

void Controlador::mostrarDistanciaConsola(){
  float inches = 0;
  float cm = 0;
  cm = sensor->medirDistancia();
  inches = cm / 2.54;
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.println("cm");
}