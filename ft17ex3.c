#include <stdio.h>

void main()
{
	int num1, num2;
	char conta;
	
	printf("Introduza o 1º numero: "); scanf("%d", &num1);
	printf("Introduza o 2º numero: "); scanf(" %d", &num2);
	printf("\nAdição\t\t[a]\nSubtracção\t[s]\nMultiplicação\t[m]\nDivisão\t\t[d]\n\n"); scanf(" %c", &conta);
	
	switch (conta)
	{
		case 'a': printf("%d + %d = %d", num1, num2, num1+num2); break;
		case 's': printf("%d - %d = %d", num1, num2, num1-num2); break;
		case 'm': printf("%d * %d = %d", num1, num2, num1*num2); break;
		case 'd': printf("%d / %d = %d", num1, num2, num1/num2); break;
		default: printf("Desconheço essa operação!!!"); break;
	}
	printf("\n");
}
