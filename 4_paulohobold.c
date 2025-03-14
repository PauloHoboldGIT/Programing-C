#include <stdio.h>

int main() {
  int idade;
  float peso;
  char tipo_animal;
  printf("Digite as informacoes do seu pet \n");
  printf("Idade do seu pet:");  
  scanf("%d", &idade);
  
  printf("Peso do seu pet:");
  scanf("%f", &peso);
  
  printf("Qual o seu pet? \n (g para gato e c para cachorro):");
  scanf("%d", &tipo_animal);

  printf("As infomacoes do seu pet e: idade %d, peso %.2f, raca %d",idade,peso,tipo_animal);
   
  
  
  return 0;
}

// idade, peso e qual o tipo de pet g = gato c= cachorro.

//Desenvolva um programa que pe¸ca ao usu´ario, a idade e o peso de seu pet, e qual
//tipo de pet. Se for cachorro o usu´ario deve digitar c, se for gato, digita g. Mostre
//as entradas na tela.

