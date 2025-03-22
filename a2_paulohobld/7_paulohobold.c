#include <stdio.h>
int main() {

	float n1,n2,n3;
	printf("Digite 3 numeros para descobrir qual triangulo eh\nPrimeiro numero: ");
	scanf("%f", &n1);
	printf("Segundo numero: ");
	scanf("%f", &n2);
	printf("Terceiro numero: ");
	scanf("%f", &n3);

	if (n1 == n2 && n2 == n3) {
		printf("Triangulo Equilatero");
	}
	else if ( n1 == n2 || n1 == n3 || n2 == n3) {
		printf("Triangulo Isosceles");
	}   else {
		printf("Triangulo Escaleno");
	}

	return 0;
}

/*Dados trKes valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados
de um triKangulo e, se forem verificar se B4e um triKangulo equilB4atero, isB4osceles ou
escalenos. Se eles nKao formarem um triKangulo, escrever a mensagem. Considere as
seguintes propriedades:*/