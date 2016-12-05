#include <stdio.h>

int main()
{
	int consumo=156;
	float potencia=5.42, preco=0.16, iva=0.23, total;

	iva=(potencia+consumo*preco)*iva;
	total=iva+potencia+consumo*preco;
	printf("total=%.2f\n", total);

	return 0;
}

