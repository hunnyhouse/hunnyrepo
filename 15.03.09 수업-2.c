/*
작성일:15.03.09		
작성자:201211142 이동현
프로그램명:최대값 구하는 프로그램
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ELEMENTS 1130000
int score[MAX_ELEMENTS];
int find_max_score(int n);

int main()
{
	int i,num,result;
	int iii,start,finish;
	long seed;

	seed = time(NULL);	
	
	start = clock();

	result = find_max_score(MAX_ELEMENTS);
	printf("max num = %d \n",result);

	finish = clock();

	iii = (finish - start);
	printf("수행한 시간은 %u - %u = %d 초 입니다. \n",finish,start,finish - start);

	return 0;
}

int find_max_score(int n)
{
	int i, tmp;
	tmp = score[0];
	printf("비교할 숫자 입력 \n");

	for(i=0;i<MAX_ELEMENTS;i++)	
	{
		score[i] = rand();	

	}
	for(i=0;i<n;i++)
	{
		if(score[i] > tmp)
		{
			tmp = score[i];
		}
	}
	return tmp;
}