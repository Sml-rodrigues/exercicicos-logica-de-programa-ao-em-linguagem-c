 /*

  * faca um algoritmo que que leia o pedido de um cliente de fast-food conforme:
  * opcao: 1; promocao super big sanduba; preco 5,00 R$
  * opcao: 2; promocao quase super sanduba; preco 3,00 R$
  * opcao: 3; promocao micro super sanduba; preco: 1,50 R$
  * imprimir na tela o preco, a opcao, e a promocao que o cliente escolher       
  *  Data de criação: 02/07/2018
  * Autor: Samuel Rodrigues

*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("\n\t\t\tEscolha um Lanche da Promocao\n");
        printf("\n\t\t\tOpcao: 1 = BIG SUPER SANDUBA........ valor...: 5,00 R$\n");
        printf("\n\t\t\tOpcao: 2 = QUASE SUPER SANDUBA...... valor...: 3,00 R$\n");
        printf("\n\t\t\tOpcao: 3 = MICRO SUPER SANDUBINHA... valor...: 1,50 R$\n");

	int opcao;
	
	printf("\n\t\t\tDigite a opcao desejada\n");
	scanf("%d", &opcao);

	switch(opcao)
	{

	case 1:
		printf("\n\t\t\tA opcao desejada: 1 \n\t\t\t Big Super Sanduba \n\t\t\t valor a pagar 5,00\n");
		break;
	case 2:
		printf("\n\t\t\tA opcao desejada: 2 \n\t\t\t Quase Super Snaduba \n\t\t\t valor a pagar 3,00\n");
		break;
	case 3:
		printf("\n\t\t\tA opcao desejada: 3 \n\t\t\t Micro Super Snaduba \n\t\t\t valor a pagar 1,50\n");
		break;
	default:
		printf("\n\t\t\tVoce selecionou u,a opcao invalida\n");
	}
	return 0;
}
