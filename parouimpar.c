#include <stdio.h>

main()
{
	int x;
	printf("introduza um numero: "); scanf("%d", &x);
	x=x%2;	
	if (x==0)
		printf("O numero é par");
	else
		printf("O numero é impar");
	printf("\n");
}
