#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	int i;
	struct profile data[5];
	struct profile* p;
	p =data;
	for (i = 1; i <= 5; i++,p++)
	{
		
		printf("%d人目(名前):",i);
		scanf("%s",p->name);
		printf("%d人目(生年月日を空白で区切って入力):",i);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%d人目血液型を入力:",i);
		scanf("%s", p->blood);
	
	}
	p =data;
	for (i = 1; i <= 5; i++, p++)
	{
		if (strcmp(p->blood, "A") == 0) 
		{
			printf("%s -- %d年%02d月%02d日生　血液型- %s型\n", p->name,
			p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}