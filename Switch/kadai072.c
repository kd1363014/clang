#include<stdio.h>
main()
{
	char a;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &a);
	switch (a)
	{
	case'a':printf("America\nAustrlia\n");
		break;
	case'A':printf("America\nAustrlia\n");
		break;
	case'e':printf("England\n");
		break;
	case'E':printf("England\n");
		break;
	case'f':printf("France\n");
		break;
	case'F':printf("France\n");
		break;
	case'j':printf("Japan\n");
		break;
	case'J':printf("Japan\n");
		break;
	default:printf("a,e,f,j�����ꂩ�̃A���t�@�x�b�g����͂��Ă�������\n");
	}

}