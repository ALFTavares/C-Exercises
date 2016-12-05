#include <stdio.h>

main()
{
	int vitoria, empate, derrota, total;

	printf("introduza o numero de vitorias\n");
	scanf("%d", &vitoria);
	printf("introduza o numero de empates\n");
	scanf(" %d", &empate);
	printf("introduza o numero de derrotas\n");
	scanf(" %d", &derrota);
	total=vitoria*3+empate;
	printf("total=%d\n", total);
}
