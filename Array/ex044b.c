#include<stdio.h>
main()
{
	char moji1[130], moji2[130],w[130];
	int i;
	printf("������P����́F");
	scanf("%s", &moji1);
	printf("������Q����́F");
	scanf("%s", &moji2);
	printf("\nmoji1=%s  moji2=%s\n", &moji1, moji2);
	for (i = 0; moji1[i] != '\0'; i++) {
		w[i] = moji1[i];
	}
	w[i] = '\0';
	for (i = 0; moji2[i] != '\0'; i++) {
		moji1[i] = moji2[i];
	}
	moji1[i] = '\0';
	for (i = 0; w[i] != '\0'; i++) {
		moji2[i] = w[i];
	}
	moji2[i] = '\0';
	printf("����ւ����\nmojo1=%s  moji2=%s",moji1,moji2);	
}