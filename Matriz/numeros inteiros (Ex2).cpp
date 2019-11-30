#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char*argv[]) {
	setlocale (LC_ALL, "Portuguese");
	int i,j;
	int numeros[i][j];
	puts("vamos digitar numeros inteiros ?");
	for(i=0; i<5; i++){
		puts("Digite 5 numeros inteiros");
		
		for(j=0; j<5; j++);
		puts("Digite 5 numeros inteiros");
		scanf("%d",&numeros[i][j]);
	}
	printf("os numeros digitados são: %d", numeros[i][j]);
	system("PAUSE");
	return 0;
}
	
