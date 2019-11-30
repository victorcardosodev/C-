#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	int codigo;
	printf("Digite o código do produto\t");
	scanf("%d",&codigo);
	
	switch(codigo) {
		case 1:
			printf("o produto é de alimento não perecivel\n");
		break;
		case 2: case 3: case 4:
			printf("o produto é de Alimento perecível\n");
		break;
		case 5:
			printf("o produto é de Vestuário\n");
		break;
		case 6:
			printf("o produto é de Vestuário\n");
		break;
		case 7:
			printf("o produto é de Higiene pessoal\n");
		break;
}
		if(codigo>=8 && codigo<=15){
			printf("o produto é de Limpeza e utensílios domésticos\n");
		}
	system("PAUSE");
	return 0;
}
