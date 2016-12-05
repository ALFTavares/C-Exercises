#include <stdio.h>

main()
{
	char nome[50];
	int xa, xb, xi, xj, i;
	
	printf("Insira o seu nome completo:\n");
	scanf("%[^\n]", nome);
	xa=xb=xi=xj=0;
	
	for (i = 0; i < 51; i++)
	{
		if (nome[i]=='A')
			xb++;
		if (nome[i]=='a')
			xa++;
		if (nome[i]=='I')
			xj++;
		if (nome[i]=='i')
			xi++;
		}
	printf("%d 'a', %d 'A', %d 'i', %d 'I'\n", xa, xb, xi, xj);
}
