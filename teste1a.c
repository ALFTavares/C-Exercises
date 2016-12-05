#include <stdio.h>

main()
{
	float mb=1024, gb;
	int dvd, cd, disk;
	
	printf("insira um nr em GB: ");
	scanf("%f", &gb);
	
	disk=mb*gb/1.44;
	cd=mb*gb/700;
	dvd=gb/4.7;
	
	printf("%d disk, %d cd, %d dvd\n", disk, cd, dvd);
}
