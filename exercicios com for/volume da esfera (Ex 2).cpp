#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float r, vol, I;
	
	for(I=1; I<=10; 1++){
		puts("Digite o raio de uma esfera\t");
		scanf("%f",&r);
		vol=4/3*(3.14*(pow(r,3)));
		printf("\nO volume da esfera é %2.f", vol);
	}
	return 0;
}
