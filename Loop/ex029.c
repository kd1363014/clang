#include<stdio.h>
main()
{
	int a, i;
	printf("��������: ");
	scanf("%d",&a);
	i= 0;
	while (i < a) {
		printf("*");
		i++; //b=b+1;����b+=1;�ł���
	}
}