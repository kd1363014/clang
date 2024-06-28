#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int i,j,w;
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			if (data[i] > data[j])
			{
				w = data[i];
				data[i] = data[j];
				data[j] = w;

			}
		}
	}
	printf("Å‘å’l%d\tÅ¬’l%d\n", data[0], data[9]);

}