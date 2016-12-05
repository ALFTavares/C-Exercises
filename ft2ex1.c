#include <stdio.h>

int main()
{
	float VB=1000, iva=0.23, irs=0.25, vl;
	iva=iva*VB;
	irs=VB*irs;
	vl=VB+iva-irs;
	printf("valor liquido: %.2f\n", vl);

	return 0;
}

