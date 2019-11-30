#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float peso, altura, imc;
	printf("Digite o seu peso\n");
	scanf("%f",&peso);
	printf("Digite sua altura\n");
	scanf("%f",&altura);
	imc = peso/pow(altura,2);
	printf("Seu IMC é igual a %.2f\n", imc);
	return 0;
}
