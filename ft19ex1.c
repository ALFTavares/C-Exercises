#include <stdio.h>

void main()
{
	float conta, credito, debito, deposito;
	char sair;
	
	printf("Qual o valor inicial da conta?");
	scanf("%f", &conta);
	while (sair != '0' || sair != '0')
	{
		printf("\nMenu:\n1- Verificar saldo\n2- Debito\n3- Crédito\n0- sair\n\n");
		scanf(" %c", &sair);
		switch (sair)
		{
			case '1': printf("Saldo: %.2f€\n", conta); break;
			case '2':
			{
				printf("Quanto quer debitar: ");
				scanf(" %f", &debito);
				if (debito > conta)
					printf("Valor de Débito inferior ao da conta!\n\n");
				else
				{
					conta = conta - debito;
				}
				break;
			}
			case '3':
			{
				printf("Quanto quer creditar: ");
				scanf(" %f", &credito);
				conta = credito + conta;
				break;
			}
			case '0': printf("saiu!!\n"); break;
			default: printf("valor errado !!!"); break;
		}
	}
}
