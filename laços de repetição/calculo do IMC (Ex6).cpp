#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	float peso,altura,imc;
	int calimc;
	puts("Voc� deseja calcular seu IMC?");
	puts("Digite 1-Sim ou 2- N�o");
	scanf("%d",calimc);
	while (calimc==1){
	puts("Digite seu peso\t");
	scanf("%f", &peso);
	puts("Digite sua altura em centimeros\t");
	scanf("%f",&altura);
	imc=peso/(altura,2);
	if(imc<18){
		printf("Seu IMC � menor que %.2f, isso significa magreza\n",imc);
	}
	if(imc>=18 && imc<=24.9){
		printf("Seu imc � %.2f, isso significa que voc� est� sa�davel\n",imc);
	}
	if(imc>=25 && imc <=29.9){
		printf("Seu imc � %.2f, isso significa que voc� est� com sobrepeso\n",imc);
	}
	if(imc>30){
		printf("Seu imc � %f, isso significa que voc� est� com obesidade\n", imc);
	}
}
	return 0;
	system("PAUSE");
}
