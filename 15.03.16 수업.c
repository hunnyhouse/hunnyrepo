/*
작성일:15.03.16
작성자:201211142 이동현
프로그램명: 2장 순환알고리즘을 이용하여 그림2-8 추가 프로그램 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int add(int a[100], int len);

/*int sum=0;*/

int main()

{
	int a[100], i, maxnum;
	srand(time(0));
	
	for(i=0; i<(sizeof(a)/sizeof(int)); i++)
	{
		a[i] = rand();
	}
	maxnum = add(a, 100-1);
	printf("maxnum : %d \n", maxnum);
	
}

int add(int a[], int len)
{
	int tmp;

	if(len <= 0) return a[len];
	else
	{
		tmp = add(a,len-1);
		if( a[len] > tmp) 
			return a[len];
		else
			return tmp;
	}
/*	if(len>=0)
	{
		if(a[len]>=sum)
		{
			sum = a[len];
			return add(a, len-1);
		}
		else
			return add(a, len-1);
	}
	else
		return sum;
*/

}

