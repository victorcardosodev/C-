#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float r, alt, area, I;
	
	for(I=1; I<=4; I++){
	puts("Digite o raio de uma lata\t");
	scanf("%f",&r);
	puts("\nDigite a altura de uma lata\t");
	scanf("%f",&alt);
	area=2*(3.14*r*alt);
	printf("\nA área externa de uma lata é %1.f", area);
	}
	system("PAUSE");
	return 0;
}
