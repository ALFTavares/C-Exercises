#include <stdio.h>

main()
{
	char palavra[10];
	int num;
	printf("introduza uma palavra seguida de um numero inteiro:\n");
	scanf("%s %i", palavra, &num);
	printf("a palavra foi %s e o numero foi %i\n", palavra, num);
}
