/*
�ۼ���:15.03.19
�ۼ���:201211142 �̵���
���α׷���:2�� ���α׷� 2.8 �ϳ���ž
*/

#include <stdio.h>
void hanoi_tower(int n, char from, char tmp, char to)
{
	if(n==1) printf("������ %c���� %c���� �ű��. \n", from, to);
	else
	{
		hanoi_tower(n-1, from, to, tmp);
		printf("������ %d���� %c���� %c���� �ű��.\n",n, from, to);
		hanoi_tower(n-1, tmp, from, to);
	}
}
int main()
{
	hanoi_tower(64, 'A', 'B', 'C');
}

