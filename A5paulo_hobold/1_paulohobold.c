#include <stdio.h>

int main()
{	int n1,n2;
	printf("Digite dois numeros para realizar a comparacao: \nPrimeiro numero:");
	scanf("%d",&n1);
	printf("Segundo numero:");
	scanf("%d",&n2);

	while (n1 != n2) {
		if (n1<n2) {
			printf("%d e %d\n",n1,n2);
			n1++;
		} else if(n1>n2) {
			printf("%d e %d\n",n1,n2);
			n1--;
		}
	}
	printf("Numero %d e igual %d",n1,n2);
	return 0;
}
