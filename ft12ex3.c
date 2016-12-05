#include <stdio.h>

main()
{
	int x=0, y=0;

	while (x <= 100)
	{
		y=y+x;
		x++;
	}
	printf("%d\n", y);
}
