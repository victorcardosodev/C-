#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	int turno;
	printf("Digite o n�mero correspondente ao seu turno \n1 = 5hrs �s 12:59\n2 = 13hrs �s 20:59\n3 = 21hrs �s 4:59\n\n");
	scanf("%d",&turno);
	
	
	switch(turno) {
		case 1:
			printf("o seu turno � manh�\n");
		break;
		case 2:
			printf("o seu turno � tarde\n");
		break;
		case 3:
			printf("o seu turno � noite\n");
		break;
}
	system("PAUSE");
	return 0;
}
