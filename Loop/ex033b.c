#include<stdio.h>
main()
{
	int i, sum, num;
	i = 0, sum = 0,num=0;
	do{
		sum += num;
		i++;
	printf("���́H");
	scanf("%d", &num);
	} while (num != -999);
	printf("���v=%d%t����=%.2f", sum,(float)sum/(i-1) );
}