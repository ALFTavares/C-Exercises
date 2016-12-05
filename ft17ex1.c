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
	
	switch (cod)
	{
		case 100: preco = (2 * quant); break;
		case 110: preco = 2.5 * quant; break;
		case 120: preco = 6 * quant; break;
		case 130: preco = 1.5 * quant; break;
		default: printf("Código errado..."); break;
	}
	
	printf("total = %.2f\n", preco);
}
