#include <stdio.h>

main()
{
	float altura;

	printf("qual a sua altura: ");
	scanf("%f", &altura);
	if (altura < 1.40)
		printf("Anão");
	else
		
		if (altura > 2.00)
			printf("Gigante");
		else
			printf("Normal");
	printf("\n");
}
