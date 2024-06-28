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
	printf("–¼‘O‚ğ“ü—Í:");
	gets(p->name);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d", &p->birth[0], &p->birth[1],&p->birth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í:");
	scanf("%s",p->blood);
	printf("%s -- %d”N%dŒ%d“ú¶@ŒŒ‰tŒ^- %sŒ^\n", data.name,
		data.birth[0], data.birth[1], data.birth[2], data.blood);
}