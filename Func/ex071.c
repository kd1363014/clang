#include<stdio.h>
int goukei(int i, int j, int k);
float heikin(int i, int j, int k);
main()
{
	int i, j, k,g;
	float h;
	printf("整数を３つ入力:");
	scanf("%d%d%d", &i, &j, &k);
	g = goukei(i, j, k);
	h = heikin(i, j, k);
	printf("合計は%d、平均は%.2f\n", g, h);
}

int  goukei(int i, int j, int k)
{
	int g2;
	g2 = i + j + k;
	return g2;
}

float heikin(int i, int j, int k)
{
	float h2;
	h2 = (i + j + k) / 3.0;
	return h2;
}