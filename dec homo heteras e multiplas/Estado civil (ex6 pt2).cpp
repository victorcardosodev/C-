#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	char estciv;
	printf("Digite a letra correspondente ao seu estado civil\nS = Solteiro\nC = Casado\nD = Divorciado\nv = Viúvo\n\n");
	scanf("%c",&estciv);
	
	
	switch(estciv) {
		case 's':
			printf("você é solteiro(a)\n");
		break;
		case 'c':
			printf("o resultado é casado(a)\n");
		break;
		case 'd':
			printf("o resultado é divorciado(a)\n");
		break;
		case 'v':
			printf("o resultado é viúvo(a)\n");
		break;
		default: 
			printf("Impossivel identificar\n");
		break;
}
	system("PAUSE");
	return 0;
}

