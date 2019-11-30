#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
	float quantkg, valmul, pesoaci;
	printf("digite a quantidade(em kg) de peixe\t\n");
	scanf("%f",&quantkg);
	if(quantkg>50){
		pesoaci = quantkg-50;
		valmul=pesoaci*4;
		printf("O valor da multa a ser paga é de: R$ %.2f\n\n", valmul);
	}
	system("PAUSE");
	return 0;
}
