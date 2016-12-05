#include <stdio.h>

main()
{
	float vp, vt;
	int notas;
	printf("introduza o valor a pagar:\n");
	scanf(" %f", &vt);
	printf("introduza o valor pago:\n");
	scanf(" %f", &vp);
	notas=(vp-vt)/5;
	printf("numero de notas de 5€ a devolver: %d\n", notas);
}
