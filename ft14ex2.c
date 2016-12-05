#include <stdio.h>

main()
{
	int x, y;

	printf("Qual a tabuada que quer fazer: ");
	scanf("%d", &x);
	for (y = 1; y<=10; y++)
		printf("%d x %d = %d\n", x, y, x*y);
}
