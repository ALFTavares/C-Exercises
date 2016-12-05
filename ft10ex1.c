#include <stdio.h>
#include <string.h>

main()
{
	char bebida[10];

	printf("Introduza uma bebida:\nVodka\nCerveja\nMartini\nBaileys\nLicor\n");
	scanf("%s", bebida);
	if (strcmp(bebida, "vodka")==0)
		printf("12€");
	else
		if (strcmp(bebida, "cerveja")==0)
			printf("4€");
		else
			if (strcmp(bebida, "martini")==0)
				printf("8€");
			else
				if (strcmp(bebida, "baileys")==0)
					printf("10€");
				else
					if (strcmp(bebida, "licor")==0)
						printf("14€");
	printf("\n");
}
