#include <stdio.h>

main()
{
	char x;

	printf("introduza o código:\nA\nB\nC\nD\n\n");
	x=getchar();
	if (x == 'A')
		printf("Ténis Nike");
	else
		if (x == 'B')
			printf("Camisa Ralph Lauren");
		else
			if (x == 'C')
				printf("Calças Lois");
			else
				if (x == 'D')
					printf("Óculos RayBan");
				else
					printf("Diversos");
	printf("\n");
}
