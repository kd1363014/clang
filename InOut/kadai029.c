#include<stdio.h>
main()
{
	double a;
	float p = 3.1415;
	printf("���a�H");
	scanf("%lf", &a);
	printf("���a=%.6f\n�~��=%.6f\n�ʐ�=%.6f\n", a * 2, a * 2 * p, a * a * p);
}