#include <stdio.h>

void main()
{
	 float valori, juros;
	 int meses;
	 
	 printf("Introduza o valor da divida: "); scanf("%f", &valori);
	 printf("Quantos meses estão em atraso: "); scanf("%d", &meses);
	 
	 switch (meses)
	 {
	 	case 0: juros=valori; break;
	 	case 1: juros=valori*0.01; break;
	 	case 2: juros=valori*0.02; break;
	 	case 3: juros=valori*0.03; break;
	 	case 4: juros=valori*0.04; break;
	 	case 5: juros=valori*0.05; break;
	 	default: printf("Mês errado!!"); break;
	 }
	 printf("juros a pagar: %.2f\nTotal a pagar %.2f\n", juros, (juros+valori));
}
