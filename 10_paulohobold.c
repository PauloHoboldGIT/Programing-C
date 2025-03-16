#include <stdio.h>
int main() {
  float valor_invest, valor_rend,taxa,anos,valor_final;

  printf("Digite o valor que deseja investir:R$ ");
  scanf("%f",&valor_invest);
  taxa = 0.05;
  anos = 3;

  valor_final = valor_invest + (valor_invest * taxa * anos);

  printf("Valor Final do Rendimento: R$%.2f", valor_final);


    return 0;

}
// valor_final = valor_invest + (valor_invest * taxa * anos);

// Desenvolva um programa para calcular o valor final de um investimento de Maria em um banco. O programa deve receber o valor investido e mostrar quanto dinheiro ela ter´a ap´os 3 anos de investimento. Considere que o banco oferece uma taxa de juros simples de 5% ao ano, e que a taxa n˜ao muda. valor f inal = valor inicial + (valor inicial × taxa juros × anos)