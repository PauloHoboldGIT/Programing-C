#include <stdio.h>
int main() {
    
    float n1,n2,n3;
    printf("Digite 3 numeros\nPrimeiro numero: ");
    scanf("%f", &n1);
    printf("Segundo numero: ");
    scanf("%f", &n2);
    printf("Terceiro numero: ");
    scanf("%f", &n3);
    
    if ((n1>n2) && (n1>n3)){
        printf("numero %.1f maior",n1);
    } else if((n1<n2) && (n2>n3)){
        printf ("Numero %.2f maior",n2);
    }else{ 
        printf(" numero %.2f maior",n3);}
    

	return 0;
}

/*Fa¸ca um programa que pe¸ca trˆes n´umeros e diga qual o maior entre os trˆes*/