/*
�ۼ���:15.03.05		
�ۼ���:201211142 �̵���
���α׷���:���ڼ��� �Ųٷ� ����ϴ� ���α׷�
*/

#include <stdio.h>



void unknown();


int main()

{
	unknown();
}
void unknown()
{
	int ch;
	if( (ch = getchar()) != '\n')
		unknown();
	putchar(ch);
}