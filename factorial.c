#include <stdio.h>

main()
{
	int n, fact, x;

	printf("Insira o numero: ");
	scanf("%d", &n);
	x=n;
	fact=n;
	while (n > 1)
	{
		n=n-1;
		fact=fact*n;
	}
	printf("O factorial de %d é %d\n", x, fact);
}
