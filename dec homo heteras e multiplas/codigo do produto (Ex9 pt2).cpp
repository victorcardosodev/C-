#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	int codigo;
	printf("Digite o c�digo do produto\t");
	scanf("%d",&codigo);
	
	switch(codigo) {
		case 1:
			printf("o produto � de alimento n�o perecivel\n");
		break;
		case 2: case 3: case 4:
			printf("o produto � de Alimento perec�vel\n");
		break;
		case 5:
			printf("o produto � de Vestu�rio\n");
		break;
		case 6:
			printf("o produto � de Vestu�rio\n");
		break;
		case 7:
			printf("o produto � de Higiene pessoal\n");
		break;
}
		if(codigo>=8 && codigo<=15){
			printf("o produto � de Limpeza e utens�lios dom�sticos\n");
		}
	system("PAUSE");
	return 0;
}
