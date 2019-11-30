#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a,quad;
	printf("digite o valor de um dos lados do quadrado.");
	scanf("%f", &a);
	quad = a*a;
	printf("A areá do quadrado é %f", quad);
	return 0;
}
