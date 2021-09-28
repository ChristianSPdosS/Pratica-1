#include <stdio.h>


int main() {

int valor_em_segundos= 100000;

int horas= valor_em_segundos/3600;

int minutos= (valor_em_segundos%3600)/60 ;

int segundos= (valor_em_segundos%3600)%60;

printf("%d%s%d%s%d%s\n" , horas , " horas " , minutos , " minutos " , segundos , " segundos" );

  return 0;
}