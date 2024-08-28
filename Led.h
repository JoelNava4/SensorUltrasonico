#ifndef LED_H
#define LED_H

#include "Actuador.h"
#include <Arduino.h>

class Led : public Actuador {

  private:
    unsigned int pin;
    
  public:
    Led(unsigned int pin);
    void inicializar();
    void encender() override;
    void apagar() override;
};
#endif