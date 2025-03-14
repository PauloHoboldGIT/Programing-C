#include <stdio.h>
#include <math.h>
int main() {

  float raio,altura,volume;
  
  printf("Para descobrir o volume de uma lata digite as seguintes informacoes\nRaio: ");
  scanf("%f", &raio);
  
  printf("Digite a altura: ");
  scanf(" %f", &altura);

  volume = M_PI * pow(raio, 2) * altura;

  printf("A soma ficou o seguinte resultado: %.2f", volume);
  
    return 0;
  
}


// Desenvolva um programa que calcule o volume de uma lata, a partir de seu raio e sua altura. Considere que o volume ´e dado por: volume = π × raio2 × altura.

