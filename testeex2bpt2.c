#include <stdio.h>

main()
{
	int dia, diasem, diasut;

	dia = 1;
	diasem = 6;
	diasut = 0;
	while (dia <= 31)
	{
		if (diasem == 1)
			diasem = diasem + 1;
		else if (diasem == 7)
			diasem = 1;
		else
		{
			diasut = diasut + 1;
			diasem = diasem + 1;
		}
		dia = dia + 1;
	}
	diasut = diasut - 1;
	printf("%d\n", diasut);
}
