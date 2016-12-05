#include <stdio.h>

main()
{
	char frase[50];
	int x, i;
	
	printf("Escreve uma frase com um maximo de 50 caracteres:\n");
	scanf("%[^\n]", frase);
	
	for (i = 0; i < 51; i++)
	{
		if (frase[i]=='a'||frase[i]=='e'||frase[i]=='i')
			x++;
	}
	printf("%d 'a','e' e 'i's\n", x);
}
