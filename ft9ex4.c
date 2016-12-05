#include <stdio.h>

main()
{
	float sb, sl, SS=0.20, irs;

	printf("Insira o salario bruto: ");
	scanf("%f", &sb);
	if (sb <= 500)
		irs=0;
	else
		if (sb <= 1000)
			irs=.12;
		else
			if (sb <=1500)
				irs=.15;
			else
				irs=.18;
	sl=(sb-(sb*irs)-(sb*SS));
	printf("salario liquido = %.2f\n", sl);
}
