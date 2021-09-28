#include <stdio.h>



int main() {

int numero= 5673;

int unidade= numero;
int dezena= numero;
int centena= numero;
int milhar= numero;

printf("%d%s%d%s%d%s%d%s\n" , unidade , " unidades, " , dezena , " dezenas, " , centena , " centenas e " , milhar , " milhares" );

  return 0;
}