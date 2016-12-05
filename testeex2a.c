#include <stdio.h>

main()
{
	float peso, altura, imc;

	printf("Introduza o peso: ");
	scanf(" %f", &peso);
	printf("\n");
	printf("Introduza a altura: ");
	scanf(" %f", &altura);
	printf("\n");
	imc = (peso / (altura * altura));
	if (imc <= 0)
		printf("Indice de Massa Corporal Invalido!!!");
	else if (imc < 18.5)
		printf("imc = %.1f Baixo peso", imc);
	else if (imc < 25)
		printf("imc = %.1f Normal", imc);
	else if (imc < 30)
		printf("imc = %.1f Pré-obeso", imc);
	else if (imc < 35)
		printf("imc = %.1f Obeso Grau I", imc);
	else if (imc < 40)
		printf("imc = %.1f Obeso Grau II", imc);
	else
		printf("imc = %.1fObeso Grau III", imc);
	printf("\n");	
}
