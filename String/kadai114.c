#include<stdio.h>
main()
{
	char data1[100] ;
	int i = 0;
	printf("文字列は？");
	scanf("%s", &data1);
	while (data1[i])
	{
		i++;
	}
	printf("文字列:%s\t", data1);
	printf("文字数＝%d文字\n",i);
}