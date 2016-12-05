#include <stdio.h>

main()
{
	float gb;
	double mb;
	char escolha;
	int disk, cd, dvd;

	puts("Pretende guardar em:\n\n1-\tDisketes\n2-\tCDs\n3-\tDVDs\n");
	scanf(" %c", &escolha);
	printf("Introduza o valor em GB: ");
	scanf(" %f", &gb);
	mb = gb * 1024;
	switch (escolha)
	{
		case '1':
		{
			disk= mb / 1.44;
			printf("%.2fGB = %d Disketes", gb, disk);
			break;
		}
		case '2':
		{
			cd = mb / 700;
			printf("%.2fGB = %d CDs", gb, cd);
			break;
		}
		case '3':
		{
			dvd=mb / 4700;
			printf("%.2fGB = %d DVDs", gb, dvd);
			break;
		}
		default: printf("Isso não existe!!"); break;
	}
	printf("\n");
}
