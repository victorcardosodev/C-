#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	int n1,n2,op,res;
	printf("\ndigite o numero correspondente a operação desejada\n\n1 = adição\n2 = subtração\n3 = multiplicação\n4 = divisão\n\n");
	scanf("%d",&op);
	
	switch(op) {
		case 1:
			printf("Digite o primeiro valor\t");
			scanf("%d",&n1);
			printf("\ndigite o segundo valor\t");
			scanf("%d",&n2);
			res = n1 + n2;
			printf("o resultado é %d\n", res);
		break;
		case 2:
			printf("Digite o primeiro valor\t");
			scanf("%d",&n1);
			printf("\ndigite o segundo valor\t");
			scanf("%d",&n2);
			res = n1 - n2;
			printf("o resultado é %d\n", res);
		break;
		case 3:
			printf("Digite o primeiro valor\t");
			scanf("%d",&n1);
			printf("\ndigite o segundo valor\t");
			scanf("%d",&n2);			
			res = n1 * n2;
			printf("o resultado é %d\n", res);
		break;
		case 4:
			printf("Digite o primeiro valor\t");
			scanf("%d",&n1);
			printf("\ndigite o segundo valor\t");
			scanf("%d",&n2);			
			res = n1 / n2;
			printf("o resultado é %d\n", res);
		break;
		default: 
			printf("Impossivel calcular\n");
		break;
}
	system("PAUSE");
	return 0;
}
