#include <stdio.h>

main()
{
	int x=100;
	x--;
	do{
		printf("%d\n", x);
		x=x-2;
	} while (x >= 25);
}
