/*
작성일:15.04.02
작성자:201211142 이동현
프로그램명:3장 프로그램 3.6 
*/
#include <stdio.h>

void swap(int *px, int *py);

int main()
{
	int a=1, b=2;

	printf("swap을 호출하기전 a = %d , b = %d \n",a,b);
	swap(&a,&b);
	printf("swap 을 호출한 다음 a = %d , b = %d \n",a,b);


	return 0;
}


void swap(int *px, int *py)
{
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;


}