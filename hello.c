#include <stdio.h>
#include <string.h>

main()
	{
		char nome[10], apelido[10];
		int num=0;

		printf("insira o seu nome:\n");
		fgets(nome, 10, stdin);

	//contornar o enter no final do nome
		num=strlen(nome)-1;
		nome[num]='\0';
		
		printf("insira o seu apelido:\n");
		fgets(apelido, 10, stdin);

		printf("Olá %s %s\a", nome, apelido);

		return 0;
	}
