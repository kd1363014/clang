#include<stdio.h>
void gh(int a,int b,int*g, float*h);
main()
{
	int a, b,g;
	float h;
	g = 0, h = 0;
	printf("数値を２つ入力:");
	scanf("%d%d", &a, &b);
	gh(a, b, &g, &h);
	printf("合計は、%d、平均は、%.2f\n", g, h);
}
void gh(int a, int b, int* g, float* h)

{
	*g = a + b;
	*h = *g / 2.0;
}
