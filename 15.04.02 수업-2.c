/*
�ۼ���:15.04.02
�ۼ���:201211142 �̵���
���α׷���:3�� ���α׷� 3.11 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

	int number;
	char name[10];

}Example;

void main()
{
	Example *p;

	p=(Example *)malloc(2*sizeof(Example));

	if(p==NULL)
	{
		fprintf(stderr, "can`t allocate memory \n");
		exit(1);
	
	}

	p->number = 1;
	strcpy(p->name,"Park");
	(p+1)->number = 2;
	strcpy((p+1)->name, "Kim");
	free(p);
	printf("%d  %c ,%d %c \n",p->number,p->name,(p+1)->number,(p+1)->name);

	return 0;

}