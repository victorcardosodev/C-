#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char*argv[]) {
	setlocale (LC_ALL, "Portuguese");
	int i,j;
	int numeros[i][j];
	int soma;
	puts("vamos digitar numeros inteiros ?");
	for(i=0; i<10; i++){
		puts("Digite 10 numeros inteiros");
		
		for(j=0; j<12; j++);
		puts("Digite 12 numeros inteiros");
		scanf("%d",&numeros[i][j]);
	}
	soma=numeros[i][j] + numeros[i][j];
	printf("A soma dos numeros inteiros: %d", soma);
	system("PAUSE");
	return 0;
}
