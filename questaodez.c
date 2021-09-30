#include <stdio.h>



int main() {

int numero= 5673;

int unidade= numero % 10;
int numero1= (numero - unidade) / 10;

int dezena= numero1 % 10;
int numero2= (numero1 - dezena) / 10;

int centena= numero2 % 10;
int numero3= (numero2 - centena) / 10;

int milhar= numero3;

printf("%d%s%d%s%d%s%d%s\n" , unidade , " unidades, " , dezena , " dezenas, " , centena , " centenas e " , milhar , " milhares" );

  return 0;
}


