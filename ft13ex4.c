#include <stdio.h>

main()
{
	int x, y=1, z;

	printf("introduza um numero para fazer a tabuada: ");
	scanf(" %d", &x);
	do{
		z=x*y;
		printf("%d x %d = %d\n", x, y, z);
		y=y+1;
	}while (y <= 10);
}
