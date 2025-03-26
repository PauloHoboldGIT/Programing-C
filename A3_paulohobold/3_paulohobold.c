#include <stdio.h>

int main()
{
	float v1, v2, result;
	char opera;
	printf("Insira um valor para realizar as operacoes: ");
	scanf("%f", &v1);
	printf("Segundo valor: ");
	scanf("%f", &v2);



	printf("Qual operacao deseja realizar?\n [a] Adicao\n [b] Subtracao\n [c] Multiplicacao\n [d] Divisao\n\n ");
	scanf(" %c",&opera);

	switch (opera) {
	case 'a':
		result = v1 + v2;
		printf(" Resultado da adicao %.2f ",result);
		break;

	case 'b':
		result = v1 - v2;
		printf(" Resultado da subtracao %.2f ",result);
		break;

	case 'c':
		result = v1 * v2;
		printf(" Resultado da Multiplicacao %.2f ",result);
		break;

	case 'd':
		if (v2 !=0 ) {
			result = v1 / v2;
			printf(" Resultado da Divisao %.2f ",result);
			break;

		} else {
			printf ("Segundo valor invalido, digite um numero maior que zero");
			break;

		}
	}

	return 0;
}



