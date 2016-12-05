#include <stdio.h>

int main()
{
	int x=4, y=5, z=3, a=0, b=0, c=0;
	b=a-c;
	c=y*2;
	a=b+(c*2);
	b=a-c;
	c=z*2;
	a=a+c;
	c=c-b+(2*b);
	printf("a=%i\nb=%i\nc=%i\n", a, b, c);
	

	return 0;
}

