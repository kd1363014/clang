#include<stdio.h>
void sort(int *array,int size,int order);

main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	int i, order;
	printf("0‚È‚ç~‡A‚P‚È‚ç¸‡‚Å‚·B\nƒ\[ƒg•ûŒü‚ğ“ü—Í:");
	scanf("%d", &order);
	if (order == 1 || order == 0)
	{
		sort(data, 8, order);
		for (i = 0; i < 8; i++)
		{
			printf("%d ", data[i]);
		}
	}
	else
	{
		printf("‚P‚©‚O‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
	}
}
	void sort(int* array, int size, int order)
		{
			int i,j,w;
	if (order == 0)
	{
		for (i = 0; i < size-1; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				if (*(array + i) < *(array + j))
				{
					w = *(array + i);
					*(array + i) = *(array + j);
					*(array + j) = w;
				}
			}
		}
	}
	else
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = i + 1; j <size; j++)
			{
				if (*(array + i) > *(array + j))
				{
					w = *(array + i);
					*(array + i) = *(array + j);
					*(array + j) = w;
				}
			}
		}
	}
}

