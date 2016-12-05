#include <stdio.h>
#include <string.h>

main()
{
	char nome[10];
	int i;
	
	printf("Insira o nome:\n");
	scanf("%s", nome);
	if (nome[0] == 'a' || nome[0] == 'A')	
		for (i = 0; i < strlen(nome); i++) 
			printf("%c\n", nome[i]);
	else
		printf("nao imprimo esse nome!!!\n");
}
