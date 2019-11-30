#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
float num1, num2, res;
printf("digite um número real\t\n");
scanf("%f",&num1);
printf("digite o segundo número real\t\n");
scanf("%f",&num2);
res=num1+num2;
if (res>25) {
	printf("A soma é maior que 25 \n", res);
}
system("PAUSE");
return 0;
}

