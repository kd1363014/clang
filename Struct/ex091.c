#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data;
	struct profile* p;
	p = &data;
	printf("���O�����:");
	gets(p->name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d", &p->birth[0], &p->birth[1],&p->birth[2]);
	printf("���t�^�����:");
	scanf("%s",p->blood);
	printf("%s -- %d�N%d��%d�����@���t�^- %s�^\n", data.name,
		data.birth[0], data.birth[1], data.birth[2], data.blood);
}