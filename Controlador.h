#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "Led.h"
#include "SensorUltrasonico.h"

class Controlador {
  private:
    Led* leds;
    unsigned int numLeds;
    SensorUltrasonico* sensor;

  public:
    Controlador(Led* leds,unsigned int numLeds, SensorUltrasonico* sensor);
    void inicializarComponentes();
    void controlarLEDsSegunDistancia();
    void mostrarDistanciaConsola();
};
#endif