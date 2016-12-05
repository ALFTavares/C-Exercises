#include <stdio.h>

int main()
{
	int a=8, b=9, c=7, x=4, y=5, z=6;
	float m1, m2, m3, s;
	m1=(a+b+c)/3;
	m2=(x+y+z)/3;
	s=m1+m2;
	m3=(m1+m2)/2;
	printf("media1= %.2f\nmedia2= %.2f\nsoma das medias= %.2f\nmedia das medias= %.2f\n", m1, m2, s, m3);

	return 0;
}

