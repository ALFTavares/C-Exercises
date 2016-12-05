#include <stdio.h>

void main()
{
	int num;
	
	printf("introduza um numero: ");
	scanf("%d", &num);
	
	if (num >= 100 && num <= 200)
		printf("Digitou um numero entre 100 e 200");
	else
		printf("Digitou um numero fora do intervalo de 100 e 200");

	printf("\n");		
}
