#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char*p;


	p = gets(dumy);//����


	while (p != NULL)//ctrl+z�ŏI��
	{
		printf("%s\n",dumy);
		p = gets(dumy);//����
	}

}