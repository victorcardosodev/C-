#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	int pedido, acompanhamento;
	
printf("Digite o n�mero do lanche desejado \n1. BigMac \n2. Quarteir�o \n3. MacChicken \n4. Cheddar MacMelt \n5. MacMax \nR:\t");
scanf("%d",&pedido);
	
	switch(pedido) {
		case 1:
			printf("O seu pedido foi um BigMac\n");
		break;
		case 2:
			printf("O seu pedido foi um quarteir�o\n");
		break;
		case 3:
			printf("O seu pedido foi um MacChiken\n");
		break;
		case 4:
			printf("O seu pedido foi um Cheddar MacMelt\n");
		break;
		case 5:
			printf("O seu pedido foi um MacMax\n");
		break;
		default:
			printf("Pedido invalido\n");
		break;
	}
	
printf("\n\nDigite o n�mero do acompanhamento desejado \n1. fritas \n2. bebida \n3. molho \n4. tomatinho \n5. side salad \nR:\t");
scanf("%d",&acompanhamento);

	switch(acompanhamento) {
		case 1:
			printf("O seu acompanhamento � uma por��o de fritas\n");
		break;
		case 2:
			printf("O seu acompanhamento � uma bebida\n");
		break;
		case 3:
			printf("O seu acompanhamento � uma por��o de Molho\n");
		break;
		case 4:
			printf("O seu acompanhamento � uma por��o de tomatinho\n");
		break;
		case 5:
			printf("O seu acompanhamento � uma por��o de side salad\n");
		break;
		default:
			printf("Pedido invalido\n");
		break;
	}
	system ("PAUSE");
	return 0;
}
