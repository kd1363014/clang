#include<stdio.h>
void lin(char* a, char* b);
main()
{
	char a[100], b[100];
	printf("�z��a:");
	gets(a);
	printf("�z��b:");
	gets(b);
	lin(a, b);
	printf("a:%s\n", a);
}
void lin(char* a, char* b)
{
	int i, j;
	for (i = 0; *(a + i) != '\0'; i++);
	for (j = 0; *(b + j) != '\0'; j++,i++)
	{
		*(a + i) = *(b + j);
	}
	*(a + i) = '\0';
}