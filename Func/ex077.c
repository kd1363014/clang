#include<stdio.h>
void bgug(int a, int b, int c, int*d, int*s);
main()
{
	int a, b, c,d,s;
	printf("�������R����:");
	scanf("%d%d%d", &a, &b, &c);
	bgug(a, b, c, &d, &s);
	printf("�ő�l=%d �ŏ��l=%d\n", d, s);
}
void bgug(int a, int b, int c, int*d, int*s)
{
	//�ő�ld
	if (b < a && c < a)
	{
		*d = a;
	}
	else
	{
		if (a < b && c < b)
		{
			*d = b;
		}
		else
		{
			*d = c;
		}
	}
	//�ŏ��ls
	if (a < b && a < c)
	{
		*s = a;
	}
	else
	{
		if (b < a && b < c)
		{
			*s = b;
		}
		else
		{
			*s = c;
		}
	}
	
}
