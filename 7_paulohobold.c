#include <stdio.h>

int main() {
  float dolar, real , cambio;

  printf (" Para descobrir o valor de dolar para real  \n \nInforme o cambio atual: ");
  scanf("%f", &cambio);
  printf("\nValor em dolar: ");
  scanf("%f", &dolar);

  real = (dolar * cambio);
  printf("\nValor em real convertido: %.2f ", real);
  
  return 0;
  
}


//Desenvolva um algoritmo que funcione como um conversor de d´olar para real. O usu´ario dever´a informar o valor do cˆambio do d´olar naquele dia e o valor em d´olares que deseja converter. Como sa´ıda, o algoritmo dever´a mostrar quantos reais s˜ao necess´arios para comprar X d´olares: real = quantidade de dolares × cambio

// dolar    real   cambio  
// 
