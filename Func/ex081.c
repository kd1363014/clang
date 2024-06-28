#include<stdio.h>
int max(int *array,int num);
int min(int *array,int num);

main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("最大値=%d\n最小値=%d\n", max(data, 8), min(data, 8));
}
int max(int* array, int num)
{
	int i, max;
	max = *array;//仮の最大値は並列の先頭要素
	for ( i = 1; i < num; i++) {
		{
			if (max < *(array + i))
			{
				max = *(array + i);
			}

		}
	}
	return max;
}

int min(int* array, int num)
{
	int i, min;
	for (min = *array, i = 1; i < num; i++) {
	
		if (min > *(array + i))
		{
			min = *(array + i);
		}
	}
	return min;
}