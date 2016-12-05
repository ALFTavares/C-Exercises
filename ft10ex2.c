#include <stdio.h>

main()
{
	int x, y;
	char operador;

	printf("Insira o primeiro valor: ");
	scanf("%d", &x);
	printf("Insira o segundo valor: ");
	scanf(" %d", &y);
	printf("Insira o operador: ");
	scanf(" %c", &operador);
	if (operador == '*')
		printf("%d x %d = %d", x, y, x*y);
	else if (operador == '/')
		printf("%d / %d = %d", x, y, x/y);
	else if (operador == '+')
		printf("%d + %d = %d", x, y, x+y);
	else if (operador == '-')
		printf("%d - %d = %d", x, y, x-y);
	printf("\n");
}
