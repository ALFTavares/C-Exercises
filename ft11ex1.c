#include <stdio.h>

main()
{
	char nota;

	puts("insira a nota:");
	nota=getchar();
	switch (nota)
	{
		case 'a':
		case 'A': printf("Excelente"); break;
		case 'b':
		case 'B': printf("Muito Bom"); break;
		case 'c':
		case 'C': printf("Bom"); break;
		case 'd':
		case 'D': printf("Razoavel"); break;
		case 'e':
		case 'E':	printf("Mau"); break;
		case 'f':
		case 'F': printf("Muito Mau"); break;
		default:
			printf("Valor Errado!!!");
	}
	printf("\n");
}
