/*
�ۼ���:15.03.05		
�ۼ���:201211142 �̵���
���α׷���:���α׷� 1.1 �� ���� �����ϴ� ���α׷� �߰��ϱ�
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
	/* �迭�� ������ �� ����*/
	/* num = rand(); */

	result = find_max_score(MAX_ELEMENTS);
	printf("max num = %d\n",result);


	return 0;
}


int find_max_score(int n)
{
	int i, tmp;
	tmp = score[0];
	printf("���� ���ڸ� 5�� �Է��ϼ���.\n");
	for(i=0; i<MAX_ELEMENTS; i++)
		scanf("%d",&score[i]);
	for(i=0; i<n; i++)
	{
		if(score[i] >tmp)
			tmp = score[i];
	
	}
	return tmp;
}