#include<stdio.h>
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day birth;
	char blood[5];
};
main()
{
	struct profile data[5] = { { "hiramatu", 2005, 9, 12, "A" },
{ "rina", 2002, 2, 20, "AB" },
{ "asakawa", 1998, 5, 1, "O" },
{ "morisita", 1997, 12, 31, "AB"},
{ "kanami", 1970, 2, 17, "A" } };
	struct profile *p;
	int i;
	
	for (p = data, i = 1; i <= 5; i++, p++)
	{
		if (p->birth.tuki == 2) {
			printf("%s-- %02d ”N %02d ŒŽ %02d “ú¶ ŒŒ‰tŒ^-%sŒ^\n",
				p->name, p->birth.nen, p->birth.tuki, p->birth.hi, p->blood);
		}
	}
}