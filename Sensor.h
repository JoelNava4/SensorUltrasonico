#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <Arduino.h>

class Sensor{

  public:
    virtual float medirDistancia() = 0;
};
#endif