#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main(rotsoma()){
	setlocale(LC_ALL,"Portuguese");
	int opcao;
	puts("\ncalculadora simples\n");
	puts("\n 1 - para soma \n 2 - para subtra��o \n 3 - para divis�o \n 4 - para multiplica��o \n 5 - para sair");
	scanf("%d",&opcao);
	while(opcao!=5){
		switch(opcao){
			case 1: rotsoma();
		}
	}
}
int rotsoma(){
	float a,b,r;
	puts("Digite o primeiro valor");
	scanf("%f",&a);
	puts("Digite o segundo valor");
	scanf("%f",&b);
	r=a+b;
	printf("O resultado da soma � %.1f",r);
	return 0;
}
