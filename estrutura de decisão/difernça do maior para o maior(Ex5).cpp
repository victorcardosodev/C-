#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, res1, res2;
	printf("Digite o primeiro valor inteiro\t\n");
	scanf("%d",&num1);
	printf("Digite o segundo numero inteiro\t\n");
	scanf("%d",&num2);
	if(num1>num2){
		res1=num1-num2;
		printf("a diferença do maior valor para o menor é: %d\t\n", res1);
	}
	if(num2>num1) {
		res2=num2-num1;
		printf("A diferença do maior valor para o menor é:%d\t\n", res2);
	}
	system("PAUSE");
	return 0;
}
