#include <stdio.h>

main()
{
	char nome[10], sexo;
	int idade;
	float altura;
	printf("qual o seu nome?\n");
	scanf(" %10s", nome);
	printf("qual a sua idade?\n");
	scanf(" %d", &idade);
	printf("qual a sua altura?\n");
	scanf(" %f", &altura);
	printf("qual o seu genero (m/f)?\n");
	scanf(" %c", &sexo);

	printf("O seu nome é %s, a sua idade é %d, a sua altura é %.2f e o seu genero é %c\n", nome, idade, altura, sexo);
}
