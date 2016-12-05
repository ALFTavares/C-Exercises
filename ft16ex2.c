#include <stdio.h>

main()
{
	char frase1[50], frase2[50];
	int i, x=0, y=0;
	
	printf("insira a primeira frase:\n");
	scanf("%[^\n]", frase1);
	printf("insira a segunda frase:\n");
	scanf(" %[^\n]", frase2);
	
	for (i = 0; i < 51; i++)
	{
		if (frase1[i]=='a'||frase1[i]=='A'||frase1[i]=='e'||frase1[i]=='E'||frase1[i]=='u'||frase1[i]=='U')
			x++;
			
		if (frase2[i]=='a'||frase2[i]=='A'||frase2[i]=='e'||frase2[i]=='E'||frase2[i]=='u'||frase2[i]=='U')
			y++;
	}
	printf("%d 'a', 'e' e 'u's\n", x+y);
}
