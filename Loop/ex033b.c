#include<stdio.h>
main()
{
	int i, sum, num;
	i = 0, sum = 0,num=0;
	do{
		sum += num;
		i++;
	printf("”‚ÍH");
	scanf("%d", &num);
	} while (num != -999);
	printf("‡Œv=%d%t•½‹Ï=%.2f", sum,(float)sum/(i-1) );
}
