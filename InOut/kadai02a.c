#include<stdio.h>
main()
{
	double a, b;
	printf("�Q�̎����l�H");
	scanf("%lf%lf",&a,&b);
	printf("* * *%.1f��%.1f�̎l�����Z * * *\n", a, b);
	printf("�a=%.6f ��=%f ��=%f ��=%f", a + b, a - b, a * b, a / b);
}