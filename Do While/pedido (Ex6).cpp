#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	int pedido, acompanhamento, usuario;
	usuario=1;
	while(usuario <=4){
		printf("Digite o número do lanche desejado \n1. BigMac \n2. Quarteirão \n3. MacChicken \n4. Cheddar MacMelt \n5. MacMax \nR:\t");
		scanf("%d",&pedido);
		switch(pedido) {
			case 1:
				printf("O seu pedido foi um BigMac\n\n");
			break;
			case 2:
				printf("O seu pedido foi um quarteirão\n\n");
			break;
			case 3:
				printf("O seu pedido foi um MacChiken\n\n");
			break;
			case 4:
				printf("O seu pedido foi um Cheddar MacMelt\n\n");
			break;
			case 5:
				printf("O seu pedido foi um MacMax\n\n");
			break;
			default:
				printf("Pedido invalido\n\n");
			break;
		}
		usuario++;
	}
	system("PAUSE");
	return (0);
}
