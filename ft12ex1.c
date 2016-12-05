#include <stdio.h>

main()
{
	int x=1, y=0;

	while (x < 100)
	{
		y=y+x;
		x=x+2;
	}
	printf("%d\n", y);
}
