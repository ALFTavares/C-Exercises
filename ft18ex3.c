#include <stdio.h>
#include <string.h>

void main()
{
	char nome[10];
	
	printf("Insira o nome: "); scanf("%s", nome);
	for (int i=0; i < strlen(nome); i+=2)
		printf("%c (%d)\n" ,nome[i], (i+1));
	
}
