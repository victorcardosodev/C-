#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	int saldoini,opdes,novosal,saque,emprestimo,saldo,deposito;
	saldoini=10000;
	printf("\ndigite o numero correspondente a opera��o desejada\n\n1 = saque\n2 = emprestimo\n3 = dep�sito\n4 = saldo\n\n");
	scanf("%d",&opdes);
	
	switch(opdes) {
		case 1:
			printf("Digite o valor desejado para saque\t");
			scanf("%d",&saque);
			novosal=saldoini-saque;
			printf("o seu saldo atual � %d\n", novosal);
		break;
		case 2:
			printf("Digite o valor do emprestimo\t");
			scanf("%d",&emprestimo);
			novosal=saldoini+emprestimo;
			printf("o seu saldo atual � %d\n", novosal);
		break;
		case 3:
			printf("Digite o valor do deposito\t");
			scanf("%d",&deposito);
			novosal=saldoini+deposito;
			printf("o resultado � %.d\n", novosal);
		break;
		case 4:
			printf("seu saldo � %d", saldoini);
		break;
		default: 
			printf("Impossivel calcular\n");
		break;
}
	system("PAUSE");
	return 0;
}
