#include <stdio.h>

main()
{
	int nota1, nota2, nota3, res;

	printf("introduza as 3 notas: ");
	scanf("%i%i%i", &nota1, &nota2, &nota3);
	res=(nota1+nota2+nota3);
	if (res >= 15)
		printf("Bom");
	else
		if (res < 10)
			printf("Mau");
		else
			printf("Médio");
	printf("\n");
}
