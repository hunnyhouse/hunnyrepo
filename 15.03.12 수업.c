/*
�ۼ���:15.03.12	
�ۼ���:201211142 �̵���
���α׷���:���� �����ð��� ����� ����
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
	
	/* �迭 �ʱ�ȭ */
	for(i=0; i<MAX_ELEMENTS; i++)
		list[i] = i;
	start = clock();
	for(i=0; i<1000; i++)
	{
	
		/* ������ �� ���� */
		srand(time(NULL));
		rnum = rand() % MAX_ELEMENTS;

		/* �Լ� ȣ��, �ð� ����, ���� Ƚ�� ��� */
	
	
		seq_search(list, MAX_ELEMENTS, rnum);
		avg_num += rnum;
	}

	finish = clock();
    total_time = ((double) (finish - start))/CLOCKS_PER_SEC;
		
	printf("��� Ž�� Ƚ���� %lf �̰�, �� ����ð��� %lf �Դϴ�. \n", avg_num/1000, total_time);
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