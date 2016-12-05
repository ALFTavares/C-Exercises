#include <stdio.h>
#include <math.h>

main ()
{
	float n1, n2, n3;

	printf("Vamos fazer a soma de dois numeros com duas casas decimais\nIntroduza o primeiro numero:\n");
	scanf("%f", &n1);
	printf("Introduza o segundo numero:\n");
	scanf("%f", &n2);
	n3=n1*n2;
	printf("%.1fx%.1f=%.2f\n", n1, n2, n3);
}
