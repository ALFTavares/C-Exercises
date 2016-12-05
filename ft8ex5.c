#include <stdio.h>

main()
{
	int qtd;
	float desc, preco;

	printf("introduza o preço: ");
	scanf("%f", &preco);
	printf("introduza a quantidade: ");
	scanf("%i", &qtd);
	if (qtd > 50)
		desc = .25;
	else
		if (qtd > 20)
			desc = .20;
		else
			if (qtd > 10)
				desc = .10;
			else
				desc = .0;
	printf("desc = %.2f%%\nvalor final = %.2f\n",desc, (preco-(preco*desc))*qtd);
}
