#include <stdio.h>

int main()
{
	int estado;
	printf("SELECIONE O ESTADO LISTADO\n");
	printf("[1] - ACRE\n[2] - ALAGOAS\n[3] - AMAPA\n[4] -AMAZONAS \n[5] - BAHIA\n[6] - CEARA\n[7] - ESPIRITO SANTO\n[8] - GOIAS \n[9] - MARANHAO\n[10] - MATO GROSSO\n[11] - MATO GROSSO DO SUL\n[12] - MINAS GERAIS\n[13] - PARA\n[14] - PARAIBA\n[15] - PIAUI\n[16] - RIO DE JANEIRO\n[17] - RIO GRANDE DO SUL\n[18] - RONDONIA\n[19] - RORAIMA\n[20] - SANTA CATARINA\n[21] - SAO PAULO\n[22] - SERGIPE\n[23] - PERNAMBUCO\n[24] - TOCANTINS\n[25] - PARANA\n[26] - RIO GRANDE DO NORTE\n");

	scanf("%d", &estado);

	switch (estado) {
	case 4:
	case 13:
	case 18:
	case 1:
	case 19:
	case 24:
		printf("Regiao norte");
		break;
	case 15:
	case 9:
	case 23:
	case 26:
	case 14:
	case 6:
	case 5:
	case 2:
	case 22:
		    printf("Regiao Nordeste");
		    break;
	case 10:
	case 11:
	case 8:
		    printf("Regiao Centro Oeste");
		    break;
	case 7:
	case 16:
	case 21:
	case 12:
            printf("Regiao Sudeste");
		    break;
	case 17:
	case 20:
	case 25:
	    printf("Regiao Sul");
		break;

}

		return 0;
	}



