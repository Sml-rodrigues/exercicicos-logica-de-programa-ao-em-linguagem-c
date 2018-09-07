/*

  * Exercicio 08 da lista 1 logica de programaçao
  * Faça um algoritmo que:
  * leia tres notas de um aluno e mostre a na tela a maior delas           
  * Data de criação: 02/07/2018
  * Autor: Samuel Rodrigues

*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float nota1, nota2, nota3, media;
	
	printf("\n\t\t\tEntre com a primra nota\n");
	scanf("%f", &nota1);

	printf("\n\t\t\tEntre com a segunda nota\n");
	scanf("%f", &nota2);

	printf("\n\t\t\tEntre com a terceira nota\n");
	scanf("%f", &nota3);

	if(nota1>nota2 && nota1>nota3)
	{
		printf("\n\t\t\tA maior nota eh: %.2f\n", nota1);
	}
	else
		if(nota2>nota1 && nota2>nota3)
		{
			printf("\n\t\t\tA maior nota eh: %.2f\n", nota2);
		}
		else
			if(nota3>nota1 &nota3>nota2)
			{
				printf("\n\t\t\tA maior nota eh: %.2f\n", nota3);
			}
	media = ((nota1 + nota2 + nota3)/3);
		printf("\n\t\t\tA media das notas deste aluno eh: %.2f\n", media);
	return 0;
}

