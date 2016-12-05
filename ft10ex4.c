#include <stdio.h>

main()
{
	int idade;

	printf("Introduza a idade: ");
	scanf("%d", &idade);
	if (idade < 6)
		printf("Isento de pagamento");
	else if (idade < 13)
		printf("Bilhete de Criança");
	else if (idade < 65)
		printf("Bilhete Normal");
	else
		printf("Bilhete de 3ª Idade");
	printf("\n");
}
