/*

  * Exercicio 07 da lista 1 logica de programaçao
  * Faça um algoritmo que:
  * leia tres numeros inteiros e mostre na tela o menor deles           
  * Data de criação: 09/06/2018
  * Autor: Samuel Rodrigues

*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{

        printf("\n\t\t\tLEITURA DE TRES NUMEROS E MONSTRANDO O MENOR\n\n\n");

        int A, B, C;

        printf("\n\t\t\tEntre com o primeiro numero\n\n\n");
        scanf("%d", &A);
        printf("\n\t\t\tEntre com o segundo numero\n\n\n");
        scanf("%d", &B);
        printf("\n\t\t\tEntre com o treceiro numero\n\n\n");
        scanf("%d", &C);

        if( A<B && A<C)
        {
        	printf("\n\t\t\tO menor numero digitado eh: %d\n\n\n", A);
        }
        else
            if(B<A && B<C)
            {
            	printf("\n\t\t\tO menor numero digitado eh: %d\n\n\n", B);
            }
	    else
                if(C<A && C>B)
                {
			printf("\n\t\t\tO menor numero digitado eh: %d\n\n\n", C);
                }
        
                    
                printf("\n\t\t\tOs numeros digitados foram: %d - %d - %d\n\n\n",A, B, C );
return 0;
}
