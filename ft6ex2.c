#include <stdio.h>

main()
{
	int n1, n2, n3;

	printf("vamos fazer a soma de dois numeros:\nIntroduza o primeiro numero\n");
	scanf("%i", &n1);
	printf("introduza o segundo numero\n");
	scanf("%i", &n2);
	n3=n1+n2;
	printf("%i+%i=%i\n", n1, n2, n3);
}
