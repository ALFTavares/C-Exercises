#include <stdio.h>

main()
{
	int x, y=1;

	printf("Introduza um numero: ");
	scanf(" %d", &x);
	while (x > 0)
	{
		y=y*x;
		x--;
	}
	printf("%d\n", y);
}
