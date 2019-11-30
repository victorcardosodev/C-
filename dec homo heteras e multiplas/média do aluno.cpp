#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float M1, M2, M3, M4, MA;
	char NOME [20];
	printf("Digite o nome do aluno\t");
	scanf("%s",&NOME);
	printf("\nDigite a nota do primeiro bimestre\t");
	scanf("%f",&M1);
	printf("\nDgite a nota do segundo bimestre\t");
	scanf("%f",&M2);
	printf("\nDigite a nota do terceiro bimestre\t");
	scanf("%f",&M3);
	printf("\nDigite a nota do quarto bimestre\t");
	scanf("%f",&M4);
	MA=(M1+M2+M3+M4)/4;
	
	if(MA>=9 && MA<=10) {
		printf("o aluno %s tirou a nota %.2f ficando com conceito A (APROVADO)\n", NOME, MA);
	}
	if(MA>=7 && MA<=8.9) {
		printf("o aluno %s tirou a nota %.2f ficando com conceito B (APROVADO)\n", NOME, MA);
	}
	if(MA>=5 && MA<=6.9) {
		printf("o aluno %s tirou a nota %.2f ficando com conceito C (APROVADO)\n", NOME, MA);
	}
	if(MA>=2.5 && MA<=4.9) {
		printf("o aluno %s tirou a nota %.2f ficando com conceito D (REPROVADO)\n", NOME, MA);
	}
	if(MA<2.5) {
		printf("o aluno %s tirou a nota %.2f ficando com conceito E (REPROVADO)\n", NOME, MA);
	}
	
	system("PAUSE");
	return 0;
}
