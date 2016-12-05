#include <stdio.h>

main()
{
	char nome[4];
	int x;

	printf("introduza o nome: ");
	scanf("%s", nome);
	for (x = 0; x < 4; x++)
	{
		printf("%c", nome[x]);
	}
	printf("\n");
}
