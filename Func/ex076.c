#include<stdio.h>
void gh(int a,int b,int*g, float*h);
main()
{
	int a, b,g;
	float h;
	g = 0, h = 0;
	printf("���l���Q����:");
	scanf("%d%d", &a, &b);
	gh(a, b, &g, &h);
	printf("���v�́A%d�A���ς́A%.2f\n", g, h);
}
void gh(int a, int b, int* g, float* h)

{
	*g = a + b;
	*h = *g / 2.0;
}
