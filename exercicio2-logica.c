/*

  *Exercicio 2 lista 1 logica de programçao 
  * Dados: Altura e Sexo
  * Calcule o Peso Ideal nos padroes das formulas
  * Para sexo masculino (72,7 * altura) - 62
  * Para sexo feminino (62,1 * altura) - 48,7
  * Data de criação: 30/05/2018
  * Autor: Samuel Rodrigues

*/

#include<stdio.h>
#include<stdlib.h>

int main (void)
{

	printf("\n\n\n\t\t\tCALCULE O PESO IDEAL\n\n\n");

	float Sexo, Altura, PesoIdeal;
	char M, F;

	printf("\n\t\t\tDigite a Altura\n\n\n");
	scanf("%f", &Altura);
	printf("\n\t\t\tDigite:\n \t(M) para pessoa do sexo Masculino\n \t\t\tou\n \t(F) para pessoa do sexo Feminino\n\n\n");
	scanf("%f", &Sexo);

	if(Sexo == M)
	{
		PesoIdeal = (72.7 * Altura) - 62;
		printf("\t\t\t\nO Peso Ideal para esta pessoa eh = %f\n\n\n", PesoIdeal);
	}	
	else
	{
		if(Sexo == F)
		
			PesoIdeal = (-62.1 * Altura) - 48.7;
			printf("\t\t\t\nO Peso Ideal para esta pessoa eh = %f\n\n\n", PesoIdeal);
	}


	return 0;
}





