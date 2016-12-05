#include <stdio.h>

void main()
{
	char nome[10], genero;
	int idade;
	
	printf("Insira o nome: "); scanf("%s", nome);
	printf("\nInsira a idade: "); scanf(" %d", &idade);
	printf("\nInsira o genero(m/f): "); scanf(" %c", &genero);
	
	if (idade > 40 && genero == 'm' || genero == 'M')
		printf("%s ACEITA", nome);
	else
		printf("NÃO ACEITA");
	printf("\n");
}
