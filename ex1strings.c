#include <stdio.h>
#include <string.h>

void main()
{
	char string[100], string1[100];
	
	for (int i = 0; i < 5; i++)
	{
		printf("Introduza a %d palavra: ", (i+1));
		scanf("%s", string);
		strcat(string1, string);
	}
	printf("%s\n", string1);
}
