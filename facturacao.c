/*Crie um pequeno programa de facturação. Sabe-se que o valor da mão-de-obra é de 35€/h. Se o número de horas for menor que 10h, tem um desconto de 10%. Se estiver entre 10 e 50, o desconto é de 15%. E quando mais de 50h, o desconto é de 20%. Acresce sempre o valor do IVA (25%) ao valor total da facturação. Apresente o valor total a ser pago, mediante um numero de horas introduzido.*/
#include <stdio.h>

main()
{
	int horas;
	float IVA=1.25, desc, total;

	printf("Introduza o numero de hora: "); scanf("%d", &horas);
	if (horas < 10)
		desc = 0.10;
	else if (horas < 51)
		desc = 0.15;
	else
		desc = 0.20;
	total = (35 * horas - (35 * horas * desc)) * IVA;
	printf("%dh\ntotal = %.2f€\n",horas, total);
}
