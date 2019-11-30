#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	int turno;
	printf("Digite o número correspondente ao seu turno \n1 = 5hrs às 12:59\n2 = 13hrs às 20:59\n3 = 21hrs às 4:59\n\n");
	scanf("%d",&turno);
	
	
	switch(turno) {
		case 1:
			printf("o seu turno é manhã\n");
		break;
		case 2:
			printf("o seu turno é tarde\n");
		break;
		case 3:
			printf("o seu turno é noite\n");
		break;
}
	system("PAUSE");
	return 0;
}
