#include <stdio.h>

main()
{
	float p_terra, p_lua;
	char nome[10];

	printf("Qual o seu nome: \n");
	scanf("%s", nome);
	printf("Qual o seu peso (em Kg): \n");
	scanf("%f", &p_terra);	
	p_lua=((p_terra/9.8)*1.6);
	printf("O seu nome é '%s', o seu peso na Terra é '%.2fKg' e na Lua pesa '%.2fKg'\n", nome, p_terra, p_lua);
}
