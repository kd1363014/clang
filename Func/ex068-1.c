#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char data,data2;//���͗p�ϐ�

	c = scanf("%c%c",&data,&data2);//����

	while (c != EOF)//ctrl+z�ŏI��
	{
		printf("%d",c);
		putchar('\n');
		gets(dumy);
		c = scanf("%c%c", &data, &data2);//����
	}
	printf("%d\n", printf("HELLO"));//5���\�������
	printf("%d\n", printf("����ɂ���"));//10���\�������
}