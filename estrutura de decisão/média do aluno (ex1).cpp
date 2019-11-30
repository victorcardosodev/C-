#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	float n1, n2, n3, n4, ma;
	printf("digite a nota do primeiro bimestre\t\n");
	scanf("%f",&n1);
	printf("digite a nota do segundo bimestre\t\n");
	scanf("%f",&n2);
	printf("digite a nota do terceiro bimestre\t\n");
	scanf("%f",n3);
	printf("digite a nota do quarto bimestre\t\n");
	scanf("%f",n4);
	ma=(n1+n2+n3+n4)/2;
	if (ma>=7) {
		printf("aluno alcançou a média: %.2f \n", ma);
		printf("Aprovado\n");
	}
	else  {
		printf(" aluno não alcançaou a média: %.2f \n", ma);
		printf("Reprovado\n");
	}
	system("PAUSE");
	return 0;
}
