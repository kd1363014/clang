#include<stdio.h>
main()
{
	char data[6] = "Apple";
	int i;
	printf("�P�����\��\n");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c\n", data[i]);
	}
	printf("\n�������\��\n");
	//printf("%s",&data[0]);//%s�̎��̓A�h���X���w�肷��
	printf("%s", &data);//�z�񖼂��������Ɛ擪�A�h���X��\��
}