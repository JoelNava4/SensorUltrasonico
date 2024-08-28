#ifndef SENSORULTRASONICO_H
#define SENSORULTRASONICO_H

#include "Sensor.h"

class SensorUltrasonico : public Sensor {

  private:
    unsigned int trigPin, echoPin;

  public:
    SensorUltrasonico(unsigned int trigPin,unsigned int echoPin);
    void inicializar();
    float medirDistancia() override;
};
#endif