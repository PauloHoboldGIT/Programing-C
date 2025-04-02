#include <stdio.h>
int main()
{
    int dia;
    
    printf("Qual o dia de hoje? \n");
    scanf("%d", &dia);
    for (int i = 0; i <=8; i++)
    { 
    printf("Contagem:%d Dia do mes eh: %d\n ",i,dia);
        
}  
return 0;
}