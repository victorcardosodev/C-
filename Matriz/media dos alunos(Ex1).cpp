#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char*argv[]) {
	setlocale (LC_ALL, "Portuguese");
	int i,j;
	float media[5][1];
	int nome[10] [5] [1];
	float nota [1] [4];
	
	for(i=0; i<4; i++){
		printf("digite o nome do %dº aluno: \n",i+1);
		scanf("%s",&nome);
		for(j=0; j<4; j++){
			printf("digite as notas do %dº bimestre",j+1);
			scanf("%f",&nota);
			system("CLS");	
		}
	}
	media[i][j]=nota[i][j]/4;
	printf("A média do aluno %s é: %.2f", nome[i][j], media[i][j]);
	
	system("PAUSE");
	return 0;
}
