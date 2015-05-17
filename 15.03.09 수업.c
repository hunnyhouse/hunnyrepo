/*
작성일:15.03.09		
작성자:201211142 이동현
프로그램명:프로그램 1.1에 소스를 추가하여 수행시간을 측정하는 프로그램
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ELEMENTS 100000
int score[MAX_ELEMENTS];
int find_max_score(int);

int main()
{
	int i,result;
	long seed;
	double duration;
	clock_t start, finish;
	seed = time(NULL);
	srand(seed);
	
	start = clock();
	
	for(i=0; i<MAX_ELEMENTS; i++)
		score[i] = rand();

	result = find_max_score(MAX_ELEMENTS);
	
	finish = clock();
	
	printf("max num = %d \n",result);
	
	duration = (double)(finish - start)/60.0;
	printf("%.2lf 초입니다.\n",duration);
	
	return 0;
}

int find_max_score(int n)
{
	int i, tmp;

	tmp = score[0];
	for(i=0; i<n; i++)
	{
		if(score[i] > tmp)
			tmp = score[i];
	}

	return tmp;
}