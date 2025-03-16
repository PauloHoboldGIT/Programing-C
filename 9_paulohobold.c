#include <stdio.h>
int main() {
  float compra,imposto, representante,valor_final;
  printf("PARA CALCULAR O VALOR DE VENDA DIGITE O PRECO: ");
  scanf("%f", &compra);

  imposto = (compra* 30/100);
  representante = (compra*20/100);
  valor_final = compra+imposto+representante;
  printf ("Valor final do produto: %.2f\n", valor_final);
  printf ("Valor do imposto.....: %.2f \n", imposto);
  printf ("Valor do representante: %.2f\n", representante);
  


    return 0;
  
}
// 
//valor de compra = compra
//valor total da mercadoria com imposto = valor_final
//valor do imposto em 30% = imposto
//valor do representante de 20% = representante



//Desenvolva um programa que calcule o valor de venda de uma mercadoria. O usu´ario dever´a informar seu valor de compra. O valor de venda ´e dado por: valor de compra + 20% (representante) + 30% (impostos). Mostre o valor total de venda dessa mercadoria. Os valores de 20% e 30% s˜ao calculados com base no valor de compra.
