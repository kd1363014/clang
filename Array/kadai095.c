#include<stdio.h>
main()
{
	int a[] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[] = { 100,200,300,400,500,600,700,800,900,1000 };
	int i,sum=0;
	printf("�z��a��");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
		sum += a[i];
	}
	printf("\n���v��%d\t���ρ�%d\n�z��b��", sum, sum / i);
	for (i = 0,sum = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
		sum += b[i];
	}
	printf("\n���v��%d\t���ρ�%d\n", sum, sum / i);
}