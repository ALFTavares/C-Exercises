#include <stdio.h>

main()
{
	int dias, feriado, semana, dia=0;
	char s_n, sem;

	printf("Indique quantos dias tem o mês: ");
	scanf("%d", &dias);
	
	
	printf("Em que dia começou o mes: \n1-\tdomingo\n2-\tsegunda\n3-\tterça\n4-\tquarta\n5-\tquinta\n6-\tsexta\n7-\tsabado\n");
	scanf(" %c", &sem);
	switch (sem)
	{
		case '1': {dias = dias - 1; break;}
		case '2': {dia = dia + 5; dias = dias - 7; break;}
		case '3': {dia = dia + 4; dias = dias - 6; break;}
		case '4': {dia = dia + 3; dias = dias - 5; break;}
		case '5': {dia = dia + 2; dias = dias - 4; break;}
		case '6': {dia = dia + 1; dias = dias - 3; break;}
		case '7': {dias = dias - 2; break;}
	}
	do
	{
		semana = 5;
		while (semana > 0)
			{
				dias--;
				semana = semana - 1;
				dia = dia + 1;
			}
		dias = dias - 2;
	}while (dias > 0);
	if (dias < -2)
		dia = dia + dias + 2;
	printf("Houve feriados nos dias uteis?(s/n)\n");
	scanf(" %c", &s_n);
	if (s_n == 's')
	{
		printf("Indique quantos feriados houve nos dias uteis: ");
		scanf(" %d", &feriado);
		dia = dia - feriado;
	}
	printf("Houve %d dias uteis\n", dia);
}
