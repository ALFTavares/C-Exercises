#include <stdio.h>

main()
{
	char nome[100];

	puts("Introduza o seu nome completo");
	scanf("%[^\n]", nome);
	printf("O seu nome é '%s'\n", nome);
}
