#include <stdio.h>

main()
{
	int x, y;
	char operador;

	printf("Insira dois numeros: ");
	scanf("%d%d", &x, &y);
	printf("Insira o operador: ");
	scanf(" %c", &operador);
	switch(operador)
	{
		case '+':	printf("%d + %d = %d", x, y, x+y); break;
		case '-': printf("%d - %d = %d", x, y, x-y); break;
		case '*': printf("%d x %d = %d", x, y, x*y); break;
		case '/': printf("%d / %d = %d", x, y, x/y); break;
		default: printf("Operação Errada...");
	}
	printf("\n");
}
