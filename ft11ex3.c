#include <stdio.h>

main()
{
	int planeta;
	float peso, p_final;

	printf("Insira o seu peso: ");
	scanf("%f", &peso);
	puts("Insira o numero do Planeta\n\nnumero\tPlaneta\t\tGravidade Relativa\n\n1-\tMercúrio\t0.37\n2-\tVénus\t\t0.88\n3-\tMarte\t\t0.38\n4-\tJúpiter\t\t2.68\n5-\tSaturno\t\t1.15\n6-\tÚrano\t\t1.17\n");
	scanf("%d", &planeta);
	switch (planeta)
	{
		case 1:	p_final=peso*0.37; break;
		case 2: p_final=peso*0.88; break;
		case 3: p_final=peso*0.38; break;
		case 4: p_final=peso*2.68; break;
		case 5: p_final=peso*1.15; break;
		case 6: p_final=peso*1.17; break;
		default:
		{
			printf("Planeta sem gravidade");
			p_final=peso*0;
			break;
		}
	}
	printf("O seu peso nesse planeta é %.2fKg\n", p_final);
}
