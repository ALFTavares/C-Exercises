#include <stdio.h>

main()
{
	float euro, dolar, rupia;
	printf("conversao de euros para dolares e rupias\nInsira o valor em euros\n");
	scanf("%f", &euro);
	dolar=euro*1.14148;
	rupia=euro*74.1144;
	printf("%.2f euros=%.2f dolares e %.2f rupias\n", euro, dolar, rupia);
}
