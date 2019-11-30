#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	float a, b, c;
	printf("digite o valor do lado A\t\n");
	scanf("%f",&a);
	printf("Digite o valor do lado B\t\n");
	scanf("%f",&b);
	printf("Digite o valor do lado C\t\n");
	scanf("%f",&c);
	if(a+b>c && a+c>b && b+c>a){
		if(a==b && b==c){
			printf("\n\nO triangulo é equilatero\n");
		}
		else{
			if(a!=b && b!=c && c!=a){
			printf("\n\nO triangulo é isosceles\n");
			}
			else{
				printf("\n\nO triangulo é escaleno\n7");
			}
		}
	}
	system("\nPAUSE");
	return 0;
}



