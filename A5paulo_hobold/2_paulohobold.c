#include <stdio.h>

int main()
{	int op;
	float n1,n2,result;

	do {
		printf("Qual operacao deseja realizar? \n[1] Somar\n[2] Subtrair\n[3] Multiplicar\n[4] Dividir\n[5] Sair\n");
		scanf("%d",&op);
		
		printf("Digite dois numeros para realizar as operacoes: \nPrimeiro numero:");
		scanf("%f",&n1);
		printf("Segundo numero:");
		scanf("%f",&n2);
		switch (op) {
		case 1:
			result=n1+n2;
			printf("\nSoma dos numeros ficou: %.2f\n\n",result);
			break;

		case 2:
			result=n1-n2;
			printf("\nSubtracao dos numeros ficou: %.2f\n\n",result);
			break;
		case 3:
			result=n1*n2;
			printf("\nMultiplicacao dos numeros ficou: %.2f\n\n",result);
			break;
		case 4:
			result=n1/n2;
			if ( n2!=0){
				printf("\nDivisao dos numeros ficou: %.2f\n\n",result);
			}else{
				printf("Erro de divisao por 0\n");
			}
			break;
        case 5:
			printf("\nSaindo do programa\n");
			break;
		default:
			printf("\nNumero de operacao invalido\n");

		}
	} while (op !=5);

	return 0;
}

