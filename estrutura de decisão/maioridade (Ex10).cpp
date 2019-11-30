#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");
	int aa, an,id;
	printf("Digite o ano de seu nascimento\t\n");
	scanf("%d",&an);
	printf("digite o ano atual\t\n");
	scanf("%d",&aa);
	id=aa-an;
	printf("a idade do índividuo é: %d\n\n", id);
	if(id>18){
		printf("Maior de idade\n\n\n");
	}
	else {
		printf("Menor de idade\n\n\n");
	}
	system("PAUSE");
	return 0;
}
