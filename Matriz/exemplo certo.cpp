#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	int opcao;
	puts("\ncalculadora simples\n");
	puts("\n1 - para soma \n2 - para subtra��o \n3 - para divis�o \n4 - para multiplica��o \n5 - para sair \n");
	scanf("%d",&opcao);
	while(opcao!=5){
		switch(opcao){
			case 1: rotsoma();
			break;
			
			case 2: rotsubtra();
			break;
			
			case 3: rotmultip();
			break;
			
			case 4: rotdivis();
			break;
			
			case 5: break;
			
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
//	printf("O resultado da soma � %.1f",r);
	return r;
}
int rotsubtra(){
	float a,b,r;
	puts("Digite o primeiro valor");
	scanf("%f",&a);
	puts("Digite o segundo valor");
	scanf("%f",&b);
	r=a+b;
//	printf("O resultado da subtra��o � %.1f",r);
	return 0;
}
int rotmultip(){
	float a,b,r;
	puts("Digite o primeiro valor");
	scanf("%f",&a);
	puts("Digite o segundo valor");
	scanf("%f",&b);
	r=a+b;
//	printf("O resultado da multiplica��o � %.1f",r);
	return 0;
}
int rotdivis(){
	float a,b,r;
	puts("Digite o primeiro valor");
	scanf("%f",&a);
	puts("Digite o segundo valor");
	scanf("%f",&b);
	r=a+b;
//	printf("O resultado da divis�o � %.1f",r);
	return 0;
}
