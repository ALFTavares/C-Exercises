#include <stdio.h>

main()
{
	float nota1, nota2, media;

	printf("Introduza a primeira nota: ");
	scanf("%f", &nota1);
	printf("Introduza a segunda nota: ");
	scanf("%f", &nota2);
	media=(nota1+nota2)/2;
	if (media >= 9.5)
		{
		printf("a media foi '%.2f'\naluno aprovado", media);
		}
	else
		{
		printf("a media foi '%.2f'\naluno reprovado", media);
		}
	printf("\n");
}
