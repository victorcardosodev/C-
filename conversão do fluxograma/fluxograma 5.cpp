#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a,b,m;
	printf("Digite um valor para a variavel a\n");
	scanf("%f",&a);
	printf("Digite um valor para variavel b\n");
	scanf("%f",&b);
	m = (a+b)/2;
	printf("A media dos valores é %f\n", m);
	return 0;
}
