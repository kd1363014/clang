#include<stdio.h>
main()
{
	int ia, ib;
	printf("‚Q‚Â‚Ì®”H");
	scanf("%d%d", &ia, &ib);
	printf("***%d‚Æ%d‚Ìl‘¥‰‰Z***%d+\n", ia, ib, ia);
	printf("%d=%d\n", ib, ia + ib);
	printf("%d-%d=%d\n", ia, ib, ia - ib);
	printf("%d*%d=%d\n", ia, ib, ia * ib);
	printf("%d/%d=%d‚ ‚Ü‚è%d\n", ia, ib, ia / ib, ia % ib);
}