#include<stdio.h>
main()
{
	char a[100], b[100];
	int i = 0, j = 0;
	printf("������P�H");
	scanf("%s", a);
	getchar();
	printf("������Q�H");
	scanf("%s", b);
	getchar();
	while (a[i])
	{
		i++;
	}
	
	while (b[j])
	{
		a[i] = b[j];
		i++;
		j++;
	}
	a[i] = '\0';
	printf("%s\n", a);
}