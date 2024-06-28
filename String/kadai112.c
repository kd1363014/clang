#include<stdio.h>
main()
{
	char data1[6] = "abcde";
	char data2[6] = "edcba";
	int i=0;
	while (data1[i])
	{
		data2[i] = data1[i];
		i++;
	}
	printf("(コピー元)配列data1[] = %s\n", data1);
	printf("(コピー先)配列data2[] = %s\n", data2);
}