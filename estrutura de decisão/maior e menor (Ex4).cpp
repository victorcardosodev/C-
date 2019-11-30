#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2;
	printf("digite um valor real\t\n");
	scanf("%f", &num1);
	printf("digite o segundo valor real\t\n");
	scanf("%f",&num2);
	if(num1>num2){
		printf("o numero %.1f é maior que o numero %.1f\n", num1, num2);
	}
	else{
		printf("o numero %.1f é menor que o número %.1f\n", num1, num2);
	}
	system("PAUSE");
	return 0;
}
