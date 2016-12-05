#include <stdio.h>

main()
{
	int x, y, temp;

	printf ("introduza dois numeros: ");
	scanf("%i%i", &x, &y);
	if (x != y)
	{	
		if (x < y)
		{
			temp=x;
			x=y;
			y=temp;
		}
	printf("'%i' é maior que '%i'\n", x, y);
	}
	else
		printf("'%i' é igual a '%i'\n", x, y);
}
