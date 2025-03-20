#include <stdio.h>
int main() {
	int idade;
	printf("Digite sua idade para descobrir se pode ou nao votar:");
	scanf("%d",&idade);

	if(idade <18){
		printf("Nao eleitor");
	}else if (idade >=18 && idade <65 ){
	    printf("Voto obrigatorio");
	}else if(idade >=65){
	    printf("Voto facultativo");
	}


	return 0;
}

/*5. FaB8ca um programa usando estruturas aninhadas que leia a idade de uma pessoa
e informe a sua classe eleitoral:
b*/