#include <stdio.h>

int main() {

	char p;
	printf("Digite uma das opcao para prosseguir\n");
	printf("[a] 1254 // Sanduiche de presunto\n");
	printf("[b] 5698 // Churros \n");
	printf("[c] 7114 // Suco de laranja que parece de limao mas tem gosto de tamarindo\n ");
	scanf(" %c", &p);

	switch (p) {

	case 'a':
		printf("\nValor R$8,00");
		break;
	case 'b':
		printf("\nValor R$3,50");
		break;
	case 'c':
		printf("\nValor R$5,00");
		break;
	default:
		printf(" Opcao invalida.. reinicie");

	}

	return 0;
}
