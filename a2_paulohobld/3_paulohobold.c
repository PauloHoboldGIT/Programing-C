  #include <stdio.h>

  int main() {
      int maca;
      float preco_total;
      
      printf ("Digite quantas macas comprou: \n");
      scanf("%d",&maca);
      
      if(maca <12){ preco_total=maca*(float)2.30;
        printf("Valor unitario saira R$2.30\nTotal de compra: R$%.2f",preco_total);
          
      }else{ preco_total=maca*(float)1.95;
        printf("Valor unitario saira R$1.95\nTotal de compra: R$%.2f",preco_total);
      
      }
 return 0;
  }
/*As ma¸c˜as importadas custam R$ 2.30 cada se forem compradas menos de uma
d´uzia, e R$ 1.95 se forem compradas uma d´uzia ou acima. Fa¸ca um programa que
leia o n´umero de ma¸c˜as compradas, calcule e escreva o custo total da compra.*/