#include<stdio.h>
main()
{
	int a = 0, sum = 0;
	float h,b=0;
	printf("����(-999�ŏI��)?");
	scanf("%d", &a);
	while (a!=-999)
	{
		sum += a;
		b++;
		printf("����(-999�ŏI��)?");
		scanf("%d", &a);
	}
	h = sum / b;
	printf("���v=%d\n����=%.2f\n", sum, h);

}