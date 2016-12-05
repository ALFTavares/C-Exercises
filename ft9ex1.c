#include <stdio.h>

main()
{
	int num1, num2, num3, res;
	printf("insira o primeiro numero: ");
	scanf("%i", &num1);
	printf("insira o segundo numero: ");
	scanf("%i", &num2);
	printf("insira o terceiro numero: ");
	scanf("%i", &num3);
	res=(num1+num2+num3);
	if (res == 10)
		printf("10");
	else
		if (res == 20)
			printf("20");
		else
			if (res == 30)
				printf("30");
	printf("\n");
}
