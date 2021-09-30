#include <stdio.h>
#include <math.h>

int main() {

  float angulo= 30.0f;
  float distancia= 100.0f;
  float PI= 3.1416f;

  float angulo_em_graus= (angulo * PI) / 180;

  float altura= (distancia * sin(angulo_em_graus));

  printf("%f\n" , altura);

 return 0;
}

