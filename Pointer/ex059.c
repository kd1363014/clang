#include<stdio.h>
main()
{
	char data[15] = "C Language";
	char data2[15];
	char* p_data, * p_data2;
	p_data = data;
	p_data2 = data2;
	printf("data []=%s\n", data);
	while (*p_data2++ = *p_data++);//�������
	//�����O������ƍ��ӂɂO���������A�U�ƂȂ邽�߃��[�v���ʂ��邱�Ƃ��ł���
	/*while (*p_data != '\0')
	{
		*p_data2 = *p_data;��10�s�ڂ𕪉�����Ƃ����Ȃ�
		p_data2++;
		p_data++;
	}
	*p_data2 = '\0';*/

	p_data2 = data2;//data2�̃A�h���X�Ɉ����߂�
	printf("data2[]=%s\n", p_data2);
	while (*p_data2) {//*p_data2!='\0�Ɠ����Ӗ�
		putchar(*p_data2++);
	}
	putchar('\n');

}