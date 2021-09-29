#include <stdio.h>
#include <math.h>

int main() {

  float angulo= 30.0f;
  float distancia= 100.0f;

  float altura= (distancia * sin(angulo));

  printf("%f\n" , altura);

 return 0;
}

//vezes pi / por 180