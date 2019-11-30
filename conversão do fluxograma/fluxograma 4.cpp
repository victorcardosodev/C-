#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float r, area;
	printf("calculo da areá");
	printf("Digite o valor do raio");
	scanf("%f",&r);
	area = 3.14*(r*r);
	printf("O valor da areá é %f", area);
	return 0;
}
