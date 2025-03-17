#include <stdio.h>
#include <math.h>
int main() {
  float a,b,guarda;
  
  printf("Digite dois valores para realizar a troca deles\nDigite o primeiro valor: ");
    scanf("%f", &a);

  printf("Digite o seegundo valor: ");
    scanf("%f", &b);

  guarda = a;
  a = b;
  b = guarda;
  printf("\nResultado Primeir numero: = %.1f e Segundo numero= %.1f",a,b);
    

    return 0;

}


//Desenvolva um programa que leia dois valores para as vari´aveis A e B e efetue a troca dos valores. A vari´avel A deve receber o valor de B, e a vari´avel B deve receber o valor de A. Apresente os valores trocados.
