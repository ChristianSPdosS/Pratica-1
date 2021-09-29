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


 //num = input;
    //uni = num % 10;
   // num = (num - uni)/10;
   // dez = num % 10;
   // num = (num - dez)/10;
    //cent = num % 10;
   // num = (num - cent)/10;
   // mil = num % 10;