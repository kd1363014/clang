#include<stdio.h>
main()
{
	char data1[100] ;
	int i = 0;
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &data1);
	while (data1[i])
	{
		i++;
	}
	printf("•¶š—ñ:%s\t", data1);
	printf("•¶š”%d•¶š\n",i);
}