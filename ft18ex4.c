#include <stdio.h>
#include <string.h>

void main()
{
	char nome[10];
	int x;
	
	printf("Insira o nome: "); scanf("%s", nome);
	x=strlen(nome);
	for (int i = 0; i < 4; i++)
		printf("%c %d\n", nome[i], (i+1));
}
