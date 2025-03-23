#include <stdio.h>

int main() {
    int ano;
    printf("Digite um ano 4 dígitos e maior que 0: ");
    scanf("%d", &ano);


    if (ano <= 0) {
        printf("O ano deve ser maior que 0\n");
        
    }
    else if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d é ano bissexto\n", ano);
    } else {
        printf("%d não é um ano bissexto\n", ano);
    }

    return 0;
}


/*Fa¸ca um programa que verifique se o ano ´e bissexto. O ano deve ser informado pelo
usu´ario com 04 d´ıgitos e n˜ao pode ser menor ou igual a 0. Para saber se o ano ´e
bissexto:
• Deve ser divis´ıvel por 4 e n˜ao divis´ıvel por 100 ou;
• Deve ser divis´ıvel por 400.*/