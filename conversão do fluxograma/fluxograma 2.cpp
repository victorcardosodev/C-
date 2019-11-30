#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, soma;
	printf("Digite o valor de A");
	scanf("%f",&a);
	printf("Digite o valor de B");
	scanf("%f",&b);
	soma = a+b;
	printf("O valor da soma é %f", soma);
	return 0;
}

