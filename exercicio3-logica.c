/*
  * Exercicio 03 da lista 1 logica de programaçao
  * Dados: Dois numeros fornecido pelo usuario
  * mostre na tela em ordem crescente
  * Data de criação: 30/05/2018
  * Autor: Samuel Rodrigues
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("\t\t\tNUMEROS EM ORDEM CRESCENTE\n\n\n");

	int A, B;

	printf("\n\t\t\tDigite o Primeiro Numero\n\n\n");
	scanf("%d", &A);
	printf("\n\t\t\tDigite o Segunto Numero\n\n\n");
	scanf("%d", &B);

	if( A > B)
	{
		printf("\n\t\t\t%d - %d\n\n\n", A, B);
	}
	else
	{
		printf("\n\t\t\t%d - %d\n\n\n", B, A);
	}	
	if( A = B)
	{
		Printf("\n\t\t\tOs Numeros %d e %d Sao iguais\n\n\n", A , B);
	}

return 0;

}

