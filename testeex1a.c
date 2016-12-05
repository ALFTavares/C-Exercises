#include <stdio.h>

main()
{
	float dolar=1.14148, rupia=74.1144, e;

	printf("Introduza o valor em €: ");
	scanf(" %f", &e);
	printf("%.2f€ = %.2f dolares\n", e, e*dolar);
	printf("%.2f€ = %.2f rupias\n", e, e*rupia);
}
