#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char*argv[]){ 
	setlocale (LC_ALL,"Portuguese");
int i;
	int elementos[10];
	for(i=0; i<10; i++){
		printf("\ndigite %dº um numero inteiro  ", i+1);
		scanf("%d", &elementos[i]);
	}
	for(i=0; i<10; i++){
		printf("\nO %dº valor é: %.1d\n", i+1, elementos[i]);
	}
	system("PAUSE");
	return 0;
}
