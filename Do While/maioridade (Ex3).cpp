#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main( ) {
	
	setlocale(LC_ALL,"Portuguese");
	int an, aa, idade, pessoas;
	pessoas=1;
	puts("digite o ano atual");
	scanf("%d",&aa);
	while(pessoas<=15){
		puts("\nAgora digite o ano de nascimento");
		scanf("%d", &an);
		idade=aa-an;
		if(idade>=18){
		printf("A sua idade � %d, isso siginifica que voc� j� � maior de idade!\n", idade);
		}
		else{
		printf("A sua idade � %d, isso significa que voc� ainda � menor de idade!\n", idade);
		}
		pessoas++;
	}
	system("PAUSE");
	return (0);
}
