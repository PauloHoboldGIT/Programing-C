#include <stdio.h>
int main(){
     float n1,n2;
     
    printf("Digite dois para descobrir a operação \nDigite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    
    if (n1>n2){
        printf("%.1f e maior",n1);
    }else { if (n1<n2){
            printf("%.1f e maior", n2);
        }
            else{ 
                printf("Numeros são iguais");
            }
        }
    



    return 0;
}

/*Fa¸ca um programau usando else if que pe¸ca dois n´umeros e mostre qual ´e o maior
deles. Se forem iguais, informar que s˜ao iguais.*/
