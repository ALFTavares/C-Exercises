#include <stdio.h>

int main()
{
	float i=0.45, r=0.28, PF=3550, pf;
	i=i*PF;
	r=r*PF;
	pf=PF+i+r;
	printf("preço final: %.2f€\n", pf);

    return 0;
}
