#include<stdio.h>
void bgug(int a, int b, int c, int*d, int*s);
main()
{
	int a, b, c,d,s;
	printf("整数を３つ入力:");
	scanf("%d%d%d", &a, &b, &c);
	bgug(a, b, c, &d, &s);
	printf("最大値=%d 最小値=%d\n", d, s);
}
void bgug(int a, int b, int c, int*d, int*s)
{
	//最大値d
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
	//最小値s
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
