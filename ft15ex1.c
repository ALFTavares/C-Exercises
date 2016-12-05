#include <stdio.h>

main()
{
	char nome[12]={"Pedro Pepe"};
	int x, i;
	
	for (i = 0; i < 13; i++)
	{
		if (nome[i] == 'e')
			x++;
	}
	printf("%d 'e'\n", x);
}
