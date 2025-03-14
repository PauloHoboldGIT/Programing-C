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
  scanf(" %c", &tipo_animal);

  printf("As infomacoes do seu pet sao: \n Idade %d, \n Peso %.2f, \n Raca %c",idade,peso,tipo_animal);

  return 0;
  
}