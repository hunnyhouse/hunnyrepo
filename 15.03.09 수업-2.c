/*
�ۼ���:15.03.09		
�ۼ���:201211142 �̵���
���α׷���:�ִ밪 ���ϴ� ���α׷�
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
	printf("������ �ð��� %u - %u = %d �� �Դϴ�. \n",finish,start,finish - start);

	return 0;
}

int find_max_score(int n)
{
	int i, tmp;
	tmp = score[0];
	printf("���� ���� �Է� \n");

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