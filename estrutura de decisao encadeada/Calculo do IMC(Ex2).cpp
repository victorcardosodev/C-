#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	float peso,altura,imc;
	printf("Digite seu peso\t");
	scanf("%f", &peso);
	printf("Digite sua altura em centimeros\t");
	scanf("%f",&altura);
	
	imc=peso/(altura,2);
	if(imc<18){
		printf("Seu IMC é menor que %.2f, isso significa magreza\n",imc);
	}
	if(imc>=18 && imc<=24.9){
		printf("Seu imc é %.2f, isso significa que você está saúdavel\n",imc);
	}
	if(imc>=25 && imc <=29.9){
		printf("Seu imc é %.2f, isso significa que você está com sobrepeso\n",imc);
	}
	if(imc>30){
		printf("Seu imc é %f, isso significa que você está com obesidade\n", imc);
	}
	system("PAUSE");
	return 0;
}
