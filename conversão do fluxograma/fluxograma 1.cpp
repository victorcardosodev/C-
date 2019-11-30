#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, p;
	printf("digite o valor dos lados do quadrado");
	scanf("%f",&a);
	p = 4*a;
	printf("o perimetro é %f", p);
	return 0;
}
	
