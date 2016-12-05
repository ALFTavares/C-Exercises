#include <stdio.h>

void main()
{
	int alunos, pos=0, neg=0;
	float nota, media, soma=0;
	
	printf("Quantos alunos são no total: ");
	scanf("%d", &alunos);
	
	for (int i = 0; i < alunos; i++)
	{
		printf("%dº Aluno: ", (i+1));
		scanf(" %f", &nota);
		soma = soma + nota;
		if (nota >= 9.5)
			pos=pos+1;
		else
			neg=neg+1;
	}
	media = soma / alunos;
	printf("\n-Total de Alunos: %d\n-Média dos Alunos: %.1f\n-%d Alunos tiveram positiva.\n-%d Alunos tiveram negativa.\n\n", alunos, media, pos, neg);
}
