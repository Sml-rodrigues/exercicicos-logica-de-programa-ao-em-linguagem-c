/*

  * Exercicio 06 da lista 1 logica de programaçao
  * Dado: Cnsumo em Kwh.
  * construa um algoritmo para calcular a conta de energia de uma fabrica
  * Conforme tabela:
  * Consumo em Kwh   _______   Valor por Kwh (em R$)
  * ate 300          _______        1,25                        
  * De 301 ate 500   _______        1,50      
  * De 501 ate 600   _______        1,75
  * De 601 ate 800   _______        2,00
  * Acima de 800     _______        2,50            
  * Data de criação: 03/06/2018
  * Autor: Samuel Rodrigues

*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
        printf("\n\t\t\tCALCULANDO O CONSUMO DE ENERGIA EM R$\n\n\n");

        float ConsKwh, ValorPorKwh;

        printf("\n\t\t\tEntre com a quantidade de horas\n\n\n");
        scanf("%f", &ConsKwh);

        if(ConsKwh<=300)
        {
                ValorPorKwh = (ConsKwh * 1,25);
                printf("\n\t\t\tO valor do consumo eh: %f\n\n\n", ValorPorKwh);

        }
	else
		if(ConsKwh >= 301 || ConsKwh  <= 500)
		{

			ValorPorKwh = (ConsKwh * 1,50);
			printf("\n\t\t\tO valor do consumo eh: %f\n\n\n", ValorPorKwh);
		}
		else
			if(ConsKwh >= 501 || ConsKwh  <= 600)
			{
				ValorPorKwh = (ConsKwh * 1,75);
                        printf("\n\t\t\tO valor do consumo eh: %f\n\n\n", ValorPorKwh);
			}
			else
				if(ConsKwh >= 601 || ConsKwh  <= 800)
				{
					 ValorPorKwh = (ConsKwh * 2,00);
                       			 printf("\n\t\t\tO valor do consumo eh: %f\n\n\n", ValorPorKwh);
				}
		if(ConsKwh >= 800)
	{
		ValorPorKwh = (ConsKwh * 2,50);
                        printf("\n\t\t\tO valor do consumo eh: %f\n\n\n", ValorPorKwh);
	}

	return 0;

}




