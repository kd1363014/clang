#include<stdio.h>
main()
{
	int i,j;
	char a[300];
	printf("�񐔂ƕ���������");
	scanf("%d%s", &j, &a);
	for (i = 0; i < j; i++)
	{
		printf("%s\t", a);
	}
	printf("\n");

}