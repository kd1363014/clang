#include<stdio.h>
main()
{
	char data1[100] ;
	int i = 0;
	printf("������́H");
	scanf("%s", &data1);
	while (data1[i])
	{
		i++;
	}
	printf("������:%s\t", data1);
	printf("��������%d����\n",i);
}