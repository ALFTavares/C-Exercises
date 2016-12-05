#include <stdio.h>

void main()
{
	int cod, quant;
	float preco;
	
	printf("Nome\t\tCodigo\t\tPreço\nCachorro Quente\t100\t\t2\nHamburger\t110\t\t2.5\nBitoque\t\t120\t\t6\nSumol\t\t130\t\t1.5\n");
	printf("\nIntroduza o código do artigo: ");
	scanf("%d", &cod);
	printf("\nIntroduza a quantidade: ");
	scanf("%d", &quant);
	
	if (cod == 100)
		preco = quant * 2;
	else if (cod == 110)
		preco = quant * 2.5;
	else if (cod == 120)
		preco = quant * 6;
	else if (cod == 130)
		preco = quant * 1.5;
	else
		printf("Cóigo inexistente...");
	
	printf("total = %d\n", preco);
}
