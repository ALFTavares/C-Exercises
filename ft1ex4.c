#include <stdio.h>
#include <math.h>

int main()
{
	float R=4.5, PI=3.14, s, e;
	e=pow(R, 2);
	s=PI*e;
	printf("%.2fx%.1f^2=%.3f\n",PI, R, s);

    return 0;
}
