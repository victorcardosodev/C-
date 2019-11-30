#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	int idade,I;
	printf("digite a idade da pessoa\t");
	scanf("%d", &idade);
	
	for(I=1; I<=4; I++){
		
		if(idade>=5 && idade<=7) {
			printf("\ninfantil A");
		}
		if(idade>=8 && idade<=10) {
			printf("\ninfantil B");	
		}
		if(idade>=11 && idade<=13) {
			printf("\nJuvenil A\n");
		}
		if(idade>=14 && idade <=17) {
			printf (" \njuvenil B\n");
		}
		if(idade>=18) {
			printf("\nSenior\n");
		}
	}
system("PAUSE");
return 0;
}	
