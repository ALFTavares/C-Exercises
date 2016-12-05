#include <stdio.h>

main()
{
	char x[3];

	printf("Insira o código:\n001\n002\n003\n");
	scanf("%s", x);
	if (strcmp(x, "001")==0)
		printf("Parafuso");
	else if (strcmp(x, "002")==0)
		printf("Porca");
	else if (strcmp(x, "003")==0)
		printf("Prego");
	else
		printf("Diversos");
	printf("\n");
}
