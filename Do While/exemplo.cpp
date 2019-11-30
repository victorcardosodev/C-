#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main( ) {
	
	setlocale(LC_ALL,"Portuguese");
	int AN, AA, IDA, ID2050;
	int Resp;
	AA=2019;
	do {
		puts("Digite o ano em que você nasceu");
		scanf("%d",&AN);
		IDA=AA-AN;
		ID2050=2050-AN;
		printf("Sua idade atual é %d\n", IDA);
		printf("Sua idade em 2050 será %dn", ID2050);
		puts("Deseja calcular novamente ?");
		puts("1 - para Sim ou 2 - para Não");
		scanf("%d",Resp);
	} while(Resp==1);
	system("PAUSE");
	return (0);
}

