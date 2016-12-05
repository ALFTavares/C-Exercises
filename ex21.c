#include <stdio.h>

void main()
{
	float area;
	int x, y;
	char menu;
	
	do
	{
		printf("\nCalcular Areas\n\n1- Quadrado/Rectangulo\n2- Triangulo\n3- Circunferência\n4- Sair\n\nQual destas areas deseja calcular: ");
		scanf(" %c", &menu);
		switch (menu)
		{
			case '1':
			{
				printf("Introduza a base: ");
				scanf(" %d", &x);
				printf("Introduza a altura: ");
				scanf(" %d", &y);
				area = x * y;
				printf("Area = %.2f\n", area);
				break;
			}
			case '2':
			{
				printf("Introduza a base: ");
				scanf(" %d", &x);
				printf("Introduza a altura: ");
				scanf(" %d", &y);
				area = (x * y) / 2;
				printf("Area = %.2f\n", area);
				break;
			}
			case '3':
			{
				printf("Introduza o valor do raio: ");
				scanf(" %d", &x);
				area = 3.14 * (x * x);
				printf("Area = %.2f\n", area);
				break; 
			}
			case '4':
				printf("Saiu\n");
				break;
			default:
				printf("Valor errado\n");
				break;
		}
	}while (menu != '4');
}
