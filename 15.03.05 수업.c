/*
작성일:15.03.05		
작성자:201211142 이동현
프로그램명:프로그램 1.1 에 난수 생성하는 프로그램 추가하기
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ELEMENTS 5
int score[MAX_ELEMENTS];
int find_max_score(int n);
int	main()
{
	int i , num , result;
	long seed;

	seed = time(NULL);
	srand(seed);
	/* 배열에 임의의 수 저장*/
	/* num = rand(); */

	result = find_max_score(MAX_ELEMENTS);
	printf("max num = %d\n",result);


	return 0;
}


int find_max_score(int n)
{
	int i, tmp;
	tmp = score[0];
	printf("비교할 숫자를 5개 입력하세요.\n");
	for(i=0; i<MAX_ELEMENTS; i++)
		scanf("%d",&score[i]);
	for(i=0; i<n; i++)
	{
		if(score[i] >tmp)
			tmp = score[i];
	
	}
	return tmp;
}