#include <stdio.h>
#include <stdlib.h>

main()
{
	int x, y, z;
	char s;

	do{
		printf("Insira um numero para fazer a tabuada: ");
		scanf(" %d", &x);
		y=1;
		while (y <= 10){
			z=x*y;
			printf("%d x %d = %d\n", x, y, z);
			y++;
		}
			printf("quer continuar?(s/n)\n");
			scanf(" %c", &s);
			system("clear");
		}while (s == 's');
}
