/*

  * Exercicio 05 da lista 1 logica de programaçao
  * Elabore um algoritmo que calclule a area de um triangulo
  * formula Area = (Base X Altura)/2
  * Data de criação: 02/06/2018
  * Autor: Samuel Rodrigues

*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("\n\t\t\tCALCULANDO A AREA DE UM TRIANGULO\n\n\n");
	float Area, Base, Altura;

	if(Base>0)
	{
		printf("\n\t\t\tInforme a Base:\n\n\n");
		scanf("%f", &Base);
	}
		else;
			if(Base!=0);
		{

			printf("\n\t\t\tInforme a Altura\n\n\n");
			scanf("%f", &Altura);
			Area=(Base * Altura)/2;
			printf("\n\t\t\tAreadeste triangulo eh: %.2f\n\n\n", Area);
			
		}
	
return 0;
}
