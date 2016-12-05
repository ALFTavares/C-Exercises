#include <stdio.h>
#include <string.h>

void main()
{
	char nome[10];
	int x;
	
	printf("insira o nome: "); scanf("%s", nome);
	x=strlen(nome);
	for (int i=1; i<=x; i++)
	{
		printf("%s (%d)\n", nome, i);
	} 
}
