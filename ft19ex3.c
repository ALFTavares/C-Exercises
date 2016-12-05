#include <stdio.h>

void main()
{
	int total=0, velhinhos=0, jovens=0, idade;
	
	do
	{
		printf("Qual a idade da pessoa (0 para sair): ");
		scanf(" %d", &idade);
		if (idade < 21)
			jovens = jovens + 1;
		else if (idade > 50)
			velhinhos=velhinhos+1;
		total=total+1;
	}while (idade != 0);
	printf("\nTotal de Pessoas:\t\t       %d\nTotal de pessoas com mais de 50 anos:  %d\nTotal de pessoas com menos de 21 anos: %d\n", (total-1), velhinhos, (jovens-1));
}
