#include <stdio.h>

main()
{
	int x=100, y=0;

	while (x > 1)
	{
		y=y+x;
		x=x-2;
	}
	printf("%d\n", y);
}
