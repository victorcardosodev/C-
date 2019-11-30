#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	float M1, M2, M3, M4, MA, medias;
	char NOME [12];
	medias=1;
	while(medias<=7){
	puts("Digite o nome do aluno\t");
	scanf("%s",&NOME);
	puts("\nDigite a nota do primeiro bimestre\t");
	scanf("%f",&M1);
	puts("\nDgite a nota do segundo bimestre.\t");
	scanf("%f",&M2);
	puts("\nDigite a nota do terceiro bimestre.\t");
	scanf("%f",&M3);
	puts("\nDigite a nota do quarto bimestre.\t");
	scanf("%f",&M4);
	MA=(M1+M2+M3+M4)/4;
	printf("\na nota do aluno %s é %.1f", NOME,MA);
	medias++;
}
return 0;
system("PAUSE");
}
