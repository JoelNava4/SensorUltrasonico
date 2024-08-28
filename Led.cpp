#include "LED.h"

Led::Led(unsigned int pin) {
  this->pin = pin;
}

void Led::inicializar(){
  pinMode(pin, OUTPUT);
}

void Led::encender() {
  digitalWrite(pin, HIGH);
}

void Led::apagar() {
  digitalWrite(pin, LOW);
}