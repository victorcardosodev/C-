#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	int mes;
	
	printf("Digite o numero correspondente ao mês desejado\t");
	scanf("%d",&mes);
	
	switch(mes){
		case 1:
			printf("O mês desejado é Janeiro\n");
		break;
		case 2:
			printf("O mês desejado é Fevereiro\n");
		break;
		case 3:
			printf("O mês desejado é Março\n");
		break;	
		case 4:
			printf("O mês desejado é Abril\n");
		break;
		case 5:
			printf("O mês desejado é Maio\n");
		break;
		case 6:
			printf("O mês desejado é Junho\n");
		break;
		case 7:
			printf("O mês desejado é Julho\n");
		break;
		case 8:
			printf("O mês desejado é Agolto\n");
		break;
		case 9:
			printf("O mês desejado é Setembro\n");
		break;
		case 10:
			printf("O mês desejado é Outubro\n");
		break;	
		case 11:
			printf("O mês desejado é Novembro\n");
		break;	
		case 12:
			printf("O mês desejado é Dezembro\n");
		break;	
		default:
			printf("Mês invalido\n");
		break;
	}
	system("PAUSE");
	return 0;
}
