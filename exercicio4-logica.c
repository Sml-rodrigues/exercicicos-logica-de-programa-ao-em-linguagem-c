/*
  * Exercicio 04 da lista 1 logica de programaçao
  * Dados: Dois numeros digitados pelo usuario
  * Verifique qual e o maior
  * Mostre a diferença entre os dois numeros
  * Emitir uma menssageem avisando que os numeros tem que ser difetentes
  * Data de criação: 02/06/2018
  * Autor: Samuel Rodrigues
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("\n\t\t\tVERIFICANDO QUAL O MAIOR, E A DIFERENÇCA\n\n\n");

	int A, B, Dif;

	printf("\n\t\t\tDigite o Primeiro Numero\n\n\n");
	scanf("%d", &A);
	printf("\n\t\t\tDigite o Segundo Numero\n\n\n");
	scanf("%d", &B);

	if(A>B)
	{
		printf("\n\t\t\tO numero %d eh o maior\n\n\n", A);
	}
	else
	{
		(B>A);
		printf("\n\t\t\tO Numero %d eh o maior\n\n\n", B);
		}
	if(Dif = A - B)
	{
		printf("\n\t\t\tA diferrença entre esses dois numeros eh %d\n\n\n", Dif);
        }

	return 0;
}

