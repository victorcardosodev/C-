#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	int mes;
	
	printf("Digite o numero correspondente ao m�s desejado\t");
	scanf("%d",&mes);
	
	switch(mes){
		case 1:
			printf("O m�s desejado � Janeiro\n");
		break;
		case 2:
			printf("O m�s desejado � Fevereiro\n");
		break;
		case 3:
			printf("O m�s desejado � Mar�o\n");
		break;	
		case 4:
			printf("O m�s desejado � Abril\n");
		break;
		case 5:
			printf("O m�s desejado � Maio\n");
		break;
		case 6:
			printf("O m�s desejado � Junho\n");
		break;
		case 7:
			printf("O m�s desejado � Julho\n");
		break;
		case 8:
			printf("O m�s desejado � Agolto\n");
		break;
		case 9:
			printf("O m�s desejado � Setembro\n");
		break;
		case 10:
			printf("O m�s desejado � Outubro\n");
		break;	
		case 11:
			printf("O m�s desejado � Novembro\n");
		break;	
		case 12:
			printf("O m�s desejado � Dezembro\n");
		break;	
		default:
			printf("M�s invalido\n");
		break;
	}
	system("PAUSE");
	return 0;
}
