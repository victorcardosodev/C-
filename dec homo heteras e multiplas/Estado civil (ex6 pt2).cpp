#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	char estciv;
	printf("Digite a letra correspondente ao seu estado civil\nS = Solteiro\nC = Casado\nD = Divorciado\nv = Vi�vo\n\n");
	scanf("%c",&estciv);
	
	
	switch(estciv) {
		case 's':
			printf("voc� � solteiro(a)\n");
		break;
		case 'c':
			printf("o resultado � casado(a)\n");
		break;
		case 'd':
			printf("o resultado � divorciado(a)\n");
		break;
		case 'v':
			printf("o resultado � vi�vo(a)\n");
		break;
		default: 
			printf("Impossivel identificar\n");
		break;
}
	system("PAUSE");
	return 0;
}

