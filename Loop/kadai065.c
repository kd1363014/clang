#include<stdio.h>
main()
{
	int a=0,sum=0;
	float i = -1;
	do {
		
		sum += a;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &a);
		i++;
		
	} while (a != -999);
	printf("���v=%d\n����=%f\n", sum, (float)sum/i);
}