#include <stdio.h>
#include <math.h>
int main() {
  int a,b,soma, subtracao, multiplicacao,divisao, potencia, porcentagem;

  printf(" Digite dois numeros para descobrir as operacoes\nDigite o primeiro numero: ");
    scanf("%d",&a);

  printf("Digite o segundo numero: ");
    scanf("%d", &b);


  soma= a + b;
  subtracao = a - b;
  multiplicacao = a * b;
  divisao = a / b;
  potencia= pow(a,b);
  porcentagem = a % b;

    printf("As seguintes operacoes sao:\n SOMA.........: %d \n SUBTRACAO....: %d \n MULTIPLICACAO: %d \n DIVISAO......: %d \n POTENCIA.....: %d \n PORCENTAGEM..: %d ", soma, subtracao,multiplicacao,divisao,potencia,porcentagem);

    return 0;

}

//Desenvolva um programa que receba dois n´umeros inteiros e mostre o resultado das
//seguintes opera¸c˜oes:  gcc nome_arquivo.c -o nome_arquivo -lm
//• Soma dos dois n´umeros
//• Subtra¸c˜ao do primeiro pelo segundo
//• Multiplica¸c˜ao dos dois n´umeros
//• Divis˜ao do primeiro pelo segundo
//• O primeiro n´umero elevado ao segundo n´umero
//• O resto da divis˜ao do primeiro n´umero pelo segundo