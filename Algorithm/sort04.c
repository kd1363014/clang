#include<stdio.h>
#define DCNT 8
main()
{
	int i, j, gap,w;
	int d[DCNT] = { 70,60,80,50,40,20,30,10 };
	gap = DCNT / 2;
	while (gap > 0)
	{
		for (i = gap; i < DCNT; i++)
		{
			for (j = i - gap; j >= 0; j -= gap)
			{
				////確認用に表示
				//int k;
				//for (k = 0; k < DCNT; k++)
				//{
				//	printf("%d", d[k]);
				//}
				//printf("\n");
				if (d[j + gap] < d[j])
				{
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
			}
		}
		gap = gap / 2;
	}
	for (i = 0; i < 8; i++)
	{
		printf("%d,", d[i]);
	}

}