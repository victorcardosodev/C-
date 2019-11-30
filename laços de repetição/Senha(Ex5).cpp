#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	int senha,dgtsenha, tentativas;
	tentativas=1;
	while(tentativas<=3){
		senha=12345;
		puts("Digite a senha");
		scanf("%d",&dgtsenha);
		if(dgtsenha!=senha){
		puts("SENHA INVALIDA");
	}
	else{
		puts("Senha correta");,
	}
		tentativas++;
}
return 0;
system("PAUSE");
}
