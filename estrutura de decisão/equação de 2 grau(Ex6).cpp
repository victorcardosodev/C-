#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
	float a, b, c, x1, x2, del, bas1, bas2;
	printf("Calculo equa��o de 2� Grau\n");
	printf("digite o valor de a \t\n");
	scanf("%f", &a);
	printf("digite o valor de b\t\n");
	scanf("%f",&b);
	printf("digite o valor de c\t\n");
	scanf("%f",&c);
	del=pow(b,2)-4*a*c;
	if(del>0){
		bas1=(-b+sqrt(del))/2*a;
		bas2=(-b-sqrt(del))/2*a;
		printf("\nos valores s�o %.1f e o outro � %.1f\n", bas1, bas2);
	}
	else{
		printf("A conta n�o dara certo\n");
	}
	system("PAUSE");
	return 0;
}
