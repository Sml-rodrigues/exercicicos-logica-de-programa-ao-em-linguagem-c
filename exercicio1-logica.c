#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("\t\t\tOPERACAO DE ADICAO\n\n\n");
	int A, B, C, Soma;
	printf("\t\t\tDigite o primeiro valor\n\n\n");
	scanf("%d", &A);
	printf("\t\t\tDigite o segundo valor\n\n\n");
	scanf("%d", &B);
	printf("\t\t\tDigite o terceiro valor\n\n\n");
        scanf("%d", &C);

	Soma = (A + B + C );

	if(Soma > 50)
	{
		printf("\t\t\tEsta operacao tem resultado maior que 50\n\n\n");
	}

	printf("\t\t\tO resultado desta adicao eh = %d\n\n\n", Soma);
	return 0;
}
