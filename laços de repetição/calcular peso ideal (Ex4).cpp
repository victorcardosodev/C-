#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	float alt, calpeso,pesoideal;
	int sexo;
	calpeso=1;
	while(calpeso<=15){
	puts("Digite o numero de acordo com o sexo,  1- Homem ou 2- Mulher");
	scanf("%d",&sexo);
	puts("Digite sua altura");
	scanf("%f",&alt);
		if(sexo==1){
			pesoideal=(72.7*alt)-58;
			printf("Seu peso ideal é %.2fKG\n\n", pesoideal);
		}
		if(sexo==2){
			pesoideal=(62.1*alt)-44.7;
			printf("Seu peso ideal é %.2fKG\n\n", pesoideal);
		}
		calpeso++;
	}
	return 0;
	system("PAUSE");
}

