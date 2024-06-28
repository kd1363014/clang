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
		
		printf("%dl–Ú(–¼‘O):",i);
		scanf("%s",p->name);
		printf("%dl–Ú(¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í):",i);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%dl–ÚŒŒ‰tŒ^‚ð“ü—Í:",i);
		scanf("%s", p->blood);
	
	}
	p =data;
	for (i = 1; i <= 5; i++, p++)
	{
		if (strcmp(p->blood, "A") == 0) 
		{
			printf("%s -- %d”N%02dŒŽ%02d“ú¶@ŒŒ‰tŒ^- %sŒ^\n", p->name,
			p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}