#include <stdio.h>

main()
{
	char nome[15];
	int x, i;
	
	printf("Introduza o nome: \n");
	scanf("%s", nome);
	
	for (i = 0; i < 16; i++)
	{
		if (nome[i] == 'a' || nome[i] == 'A')
			x++;
	}
	printf("%d 'a'\n", x);
}
