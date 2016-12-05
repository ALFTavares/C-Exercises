#include <stdio.h>

main()
{
	int peso;

	printf("qual o seu peso: ");
	scanf("%i", &peso);
	if (peso > 90)
		printf("Obeso");
	else
		if (peso >= 60)
			printf("Normal");
		else
			printf("Magro");
	printf("\n");
}
