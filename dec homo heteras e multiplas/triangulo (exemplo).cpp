#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	float a, b, c, I;
	
		for(I=1; I<=10; I++){
		puts("digite o valor do lado A\t\n");
		scanf("%f",&a);
		puts("Digite o valor do lado B\t\n");
		scanf("%f",&b);
		puts("Digite o valor do lado C\t\n");
		scanf("%f",&c);
		if(a+b>c && a+c>b && b+c>a){2
			if(a==b && b==c){
				puts("\n\nO triangulo é equilatero\n");
			}
			else{
				if(a!=b && b!=c && c!=a){
				puts("\n\nO triangulo é isosceles\n");
				}
				else{
					puts("\n\nO triangulo é escaleno\n7");
				}
			}
		}
	}
	system("\nPAUSE");
	return 0;
}



