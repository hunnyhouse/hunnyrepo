/*
작성일:15.03.19
작성자:201211142 이동현
프로그램명:2장 프로그램 2.8 하노이탑
*/

#include <stdio.h>
void hanoi_tower(int n, char from, char tmp, char to)
{
	if(n==1) printf("원판을 %c에서 %c으로 옮긴다. \n", from, to);
	else
	{
		hanoi_tower(n-1, from, to, tmp);
		printf("원판을 %d에서 %c에서 %c으로 옮긴다.\n",n, from, to);
		hanoi_tower(n-1, tmp, from, to);
	}
}
int main()
{
	hanoi_tower(64, 'A', 'B', 'C');
}

