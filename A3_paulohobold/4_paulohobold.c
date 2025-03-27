#include <stdio.h>
int main()
{
	char cat,sub;
	printf("Qual categoria de filme deseja assistir?\nSELECIONE ENTRE AS CATEGORIAS \n [f] -FILME \n [s] -SERIE \n [d] -DOCUMENTARIO\n");
	scanf(" %c", &sub);
	switch (sub) {

	case 'f': {
		printf(" --------- GENEROS ------- \n [a] -ACAO\n [c] -CORRIDA \n [D] -DRAMA \n [s] -SUSPENSE \n [t] -TECNOLOGIA\n ");
		scanf(" %c", &cat);
		switch(cat) {
		case 'a':
			printf(" OPCOES DE FILMES:\n\n RUSH- NO LIMITE DA EMOCAO \n RESGATE EM ALTA VELOCIDADE \n EM RITMO DE FUGA");
			break;
		case 'c':
			printf(" OPCOES DE FILMES:\n\n VELOZES E FURIOSOS 1 \n FORD VS FERRARI \n NEED FOOR SPEED ");
			break;
		case 'd':
			printf(" OPCOES DE FILMES:\n\n LAMBORGHINI \n FERRARI \n VELOZES E FURIOSOS 4 ");
			break;
		case 's':
			printf(" OPCOES DE FILMES:\n\n FURIA INCONTROLAVEL \n CORRIDA MORTAL 2 \n ");
			break;
		case 't':
			printf(" OPCOES DE FILMES:\n\n JOBS \n TRANSCEDENCE \n TENET");
			break;

		}
		break;
	}
	case 's': {
		printf(" --------- GENEROS ------- \n [a] -ACAO\n [c] -CORRIDA \n [D] -DRAMA \n [s] -SUSPENSE \n [t] -TECNOLOGIA\n ");
		scanf(" %c", &cat);
		switch(cat) {
		case 'a':
			printf(" OPCOES DE SERIES:\n\n REACHER \n LA CASA DE PAPEL \n PRISON BREAK");
			break;
		case 'c':
			printf(" OPCOES DE SERIES:\n\n INITAL D \n CAPETA  \n WANGAN MIDNIGHT ");
			break;
		case 'd':
			printf(" OPCOES DE SERIES:\n\n THE LAST OF US \n BREAKING BAD \n FALLOUT");
			break;
		case 's':
			printf(" OPCOES DE SERIES:\n\n DARK \n ACIMA DE QUAL QUER SUSPEITA \n DEXTER");
			break;
		case 'i':
			printf(" OPCOES DE SERIES:\n\n MR ROBOT \n THE FLASH \n HALO ");
			break;
		}
	}
	break;
	case 'd': {
		printf(" --------- GENEROS ------- \n[c] - CORRIDA \n[t] - TECNOLOGIA\n ");
		scanf(" %c", &cat);
		switch(cat) {
		case 'c':
			printf (" OPCOES DE DOCUMENTARIOS: \n\n SENNA: O HEROI BRASILEIRO\n SCHUMACHER");
			break;
		case 't':
			printf(" OPCOES DE DOCUMENTARIOS: \n\n THE AMERICAN EXPERIENCE: SILICON VALLEY \n GOOGLE E O CEREBRO DO MUNDO \n O CODIGO: BILL GATES");
			break;
		}
		break;
		default:
			printf("OPCAO INVALIDA");

		}
	}
	return 0;
}
