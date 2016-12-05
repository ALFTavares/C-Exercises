#include <stdio.h>

main()
{
	int num1, num2, num3;
	float p1, p2, p3, media;
	printf("vamos calcular a media ponderada.\nInsira o primeiro numero:\n");
	scanf("%d", &num1);
	p1=num1*1.20;
	printf("Insira o segundo numero:\n");
	scanf("%d", &num2);
	p2=num2*1.30;
	printf("Insira o terceiro numero:\n");
	scanf("%d", &num3);
	p3=num3*1.50;
	media=(p1+p2+p3)/3;
	printf("a media ponderada é de %.2f\n", media);
}
