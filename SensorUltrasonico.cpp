#include "SensorUltrasonico.h"

SensorUltrasonico::SensorUltrasonico(unsigned int trigPin,unsigned int echoPin) {
  this->trigPin = trigPin;
  this->echoPin = echoPin;
}

void SensorUltrasonico::inicializar(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

float SensorUltrasonico::medirDistancia() {
  float distancia_cm;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  distancia_cm = 0.01723 * pulseIn(echoPin, HIGH);
  return distancia_cm;
}
