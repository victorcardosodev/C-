#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	float b,h,area;
	int vezes;
	vezes=1;
	while(vezes<=10){
	puts("\nDigite a altura desejada\t");
	scanf("%f",&h);
	puts("\nDigite a base desejada\t");
	scanf("%f",&b);
	area=b*h;
	printf("\nA área do retangulo é %.2f", area);
	vezes++;
}
return 0;
system("PAUSE");
}
