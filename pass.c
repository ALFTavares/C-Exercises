#include <stdio.h>

main()
{
	char nome[100];
	int x;

	printf("introduza o nome: ");
	scanf("%s", nome);
	for (x = 10; x >= 0; x--)
	{
		printf("%c", nome[x]);
	}
	printf("\n");
}
