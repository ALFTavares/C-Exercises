#include <stdio.h>

main()
{
	char nome[10];
	int i, x=0;
	
	printf("Introduza o nome:");
	scanf("%s", nome);
	
	for (i = 1; i < 11; i++)
	{
		if (nome[i] == 's' || nome[i] == 'S')
			x++;
	}
	printf("%d 's'\n", x);
}
