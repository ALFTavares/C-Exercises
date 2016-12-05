#include <stdio.h>
#include <string.h>

main()
{
	char nome[20];
	int i, x=0, a;
	
	printf("Insira o nome completo:\n");
	scanf("%[^\n]", nome);
	a=strlen(nome);
	
	for (i = 0; i < a; i++)
	{
		x++;
		if (nome[i] == 's' || nome[i] == 'S')
			x--;
		if (nome[i] == ' ' || nome[i] == '\n')
			x--;
	}
		printf("%d letras não são 's'\n", x);
}
