#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int senha1, senha2;
	printf("crie uma senha n�merica\t\n");
	scanf("%d",&senha1);
	printf("\ndigite a senha criada\t\n");
	scanf("%d",&senha2);
	if(senha1!=senha2){
		printf("\nSenha invalida\n\n");
	}
	system("PAUSE");
	return 0;
}
