#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	int opcao;
	puts("\ncalculadora simples\n");
	puts("\n1 - para soma \n2 - para subtra��o \n3 - para multiplica��o \n4 - para divis�o  \n5 - para sair \n");
	scanf("%d",&opcao);
	while(opcao!=5){
		switch(opcao){
			case 1:
			printf("O resultado da some � %d",rotsoma());
			break;
			
			case 2:
			printf("O resultado da subtra��o � %d",rotsubtra());
			break;
			
			case 3:
			printf("O resultado da multiplica��o � %d",rotmultip());
			break;
			
			case 4:
			printf("O resultado da divis�o � %d",rotdivis());
			break;
			
			case 5: break;
			
		}
	}
}
int rotsoma(){
	float a,b,r;
	puts("\nDigite o primeiro valor");
	scanf("%d",&a);
	puts("\nDigite o segundo valor");
	scanf("%d",&b);
	r=a+b;
//	printf("O resultado da soma � %.1f",r);
	return r;
}
int rotsubtra(){
	float a,b,r;
	puts("\nDigite o primeiro valor");
	scanf("%d",&a);
	puts("\nDigite o segundo valor");
	scanf("%d",&b);
	r=a+b;
//	printf("O resultado da subtra��o � %.1f",r);
	return 0;
}
int rotmultip(){
	float a,b,r;
	puts("\nDigite o primeiro valor");
	scanf("%d",&a);
	puts("\nDigite o segundo valor");
	scanf("%d",&b);
	r=a+b;
//	printf("O resultado da multiplica��o � %.1f",r);
	return 0;
}
int rotdivis(){
	float a,b,r;
	puts("\nDigite o primeiro valor");
	scanf("%d",&a);
	puts("\nDigite o segundo valor");
	scanf("%d",&b);
	r=a+b;
//	printf("O resultado da divis�o � %.1f",r);
	return 0;
}
