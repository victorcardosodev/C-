#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("digite a idade da pessoa\t");
	scanf("%d", &idade);
	if(idade>=10 && idade<=18){
		printf("\na idade dele esta no intervalo de 10 a 18 anos\n\n");
	}
	else{
		printf("\nele tem menos de 10 anos ou mais de 18 anos\n\n");
	}
	system("PAUSE");
	return 0;
}
