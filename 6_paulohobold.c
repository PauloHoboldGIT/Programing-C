#include <stdio.h>

int main() {
  int antecessor, digitado, sucessor;

  printf("Para descobrir o antecessor e o sucessor digite um numero: ");
    scanf("%d",&digitado);

  antecessor = digitado - 1;
  sucessor = digitado +1;
  printf ("O resultado ficou o seguinte: \n Antecessor: %d, \n Digitado: %d, \n Sucessor: %d ", antecessor,digitado, sucessor);
      
  return 0;
  
}


//Desenvolva um algoritmo que pe¸ca ao usu´ario um
//n´umero inteiro. Como sa´ıda, mostre: o n´umero, seu antecessor e seu sucessor.
//Exemplo: “O n´umero informado foi 30, o antecessor ´e 29 e o sucessor ´e 31.”
