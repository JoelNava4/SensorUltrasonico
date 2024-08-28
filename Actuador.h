#ifndef ACTUADOR_H
#define ACTUADOR_H

#include <iostream>
#include <Arduino.h>

class Actuador {
  public:
    virtual void encender() = 0;
    virtual void apagar() = 0;
};
#endif