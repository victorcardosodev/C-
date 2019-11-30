#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	int tab,num,res,resp;
	resp=1;
	while(resp==1){
	puts("Digite a tabuada desejada");
	scanf("%d",&tab);
	num=1;
	while(num<=10){
		res=tab*num;
		printf("\n%d x %d = %d", tab, num, res);
		num++;
	}
	puts("Deseja calcular outra tabuada?");
	puts("1-sim ou 2-Não");
	scanf("%d",&resp);
	}
	return 0;
	system("PAUSE"); 
}
