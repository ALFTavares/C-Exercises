#include <stdio.h>

int main()
{
	int x=4, y=5, z=3, a=0, b=0, c=0;
	b=a-c;
	c=y*2;
	x=c;
	y=x+c;
	c=x;
	b=a-c;
	c=z*2;
	printf("valor final de a: %i\nvalor final de b: %i\nvalor final de c: %i\n", a, b, c);

	return 0;
}

