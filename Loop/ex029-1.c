#include<stdio.h>
main()
{
	int a;
	printf("数を入れて: ");
	scanf("%d",&a);
	while (a>0) {
		printf("*");
		a--; //b=b+1;又はb+=1;でも可
	}
}