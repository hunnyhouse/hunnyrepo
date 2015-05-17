/*
작성일:15.03.12	
작성자:201211142 이동현
프로그램명:이전 수업시간의 내용들 복습
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ELEMENTS 50000
int seq_search(int list[], int n, int key);

int main()
{
	int i, rnum;
	int list[MAX_ELEMENTS];
	clock_t start, finish;
	double avg_num = 0, total_time = 0;
	
	/* 배열 초기화 */
	for(i=0; i<MAX_ELEMENTS; i++)
		list[i] = i;
	start = clock();
	for(i=0; i<1000; i++)
	{
	
		/* 임의의 수 생성 */
		srand(time(NULL));
		rnum = rand() % MAX_ELEMENTS;

		/* 함수 호출, 시간 측정, 수행 횟수 계산 */
	
	
		seq_search(list, MAX_ELEMENTS, rnum);
		avg_num += rnum;
	}

	finish = clock();
    total_time = ((double) (finish - start))/CLOCKS_PER_SEC;
		
	printf("평균 탐색 횟수는 %lf 이고, 총 수행시간은 %lf 입니다. \n", avg_num/1000, total_time);
	return 0;				
}

int seq_search(int list[], int n, int key)
{
	int i;
	for(i=0; i<n; i++)
		if(list[i] == key)
			return i;
	return -1;
}