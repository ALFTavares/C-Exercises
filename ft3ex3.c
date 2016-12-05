#include <stdio.h>

int main()
{
	float sl, SB=1450, ss=SB*0.275, com=SB*0.10;
	int SA=90;
	sl=SB-ss+com+SA;
	printf("Salario Liquido: %.2f\n", sl);

	return 0;
}

