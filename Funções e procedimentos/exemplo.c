#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	int opcao;
	puts("\ncalculadora simples\n");
	puts("\n1 - para soma \n2 - para subtração \n3 - para multiplicação \n4 - para divisão  \n5 - para sair \n");
	scanf("%d",&opcao);
	while(opcao!=5){
		switch(opcao){
			case 1:
			printf("O resultado da some é %d",rotsoma());
			break;
			
			case 2:
			printf("O resultado da subtração é %d",rotsubtra());
			break;
			
			case 3:
			printf("O resultado da multiplicação é %d",rotmultip());
			break;
			
			case 4:
			printf("O resultado da divisão é %d",rotdivis());
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
//	printf("O resultado da soma é %.1f",r);
	return r;
}
int rotsubtra(){
	float a,b,r;
	puts("\nDigite o primeiro valor");
	scanf("%d",&a);
	puts("\nDigite o segundo valor");
	scanf("%d",&b);
	r=a+b;
//	printf("O resultado da subtração é %.1f",r);
	return 0;
}
int rotmultip(){
	float a,b,r;
	puts("\nDigite o primeiro valor");
	scanf("%d",&a);
	puts("\nDigite o segundo valor");
	scanf("%d",&b);
	r=a+b;
//	printf("O resultado da multiplicação é %.1f",r);
	return 0;
}
int rotdivis(){
	float a,b,r;
	puts("\nDigite o primeiro valor");
	scanf("%d",&a);
	puts("\nDigite o segundo valor");
	scanf("%d",&b);
	r=a+b;
//	printf("O resultado da divisão é %.1f",r);
	return 0;
}
