/*
�ۼ���:15.04.09
�ۼ���:201211142 �̵���
���α׷���:4�� ���α׷� 4.15 �������Ḯ��Ʈ ���α׷�
*/
#include <stdio.h>
#include <stdlib.h>


typedef int element;
typedef struct ListNode { 
	element data;
	struct ListNode *link;   	
} ListNode; 


// ��带 �������� �����ϴ� ���α׷�
ListNode *create_node(element data, ListNode *link)
{
	ListNode *new_node;
	new_node = (ListNode *)malloc(sizeof(ListNode)); 
	if( new_node == NULL ) {
		fprintf(stderr, "�޸� �Ҵ� ����\n");
		exit(1);
	}
	new_node->data = data;
	new_node->link = link;
	return(new_node);
}

// phead: ����Ʈ�� ��� �������� ������
// p : ���� ���
// node : ���Ե� ��� 
void insert_first(ListNode **phead,	ListNode *node) 
{
	if( *phead == NULL ){
		*phead = node;
		node->link = node;
	}
	else {
		node->link = (*phead)->link;
		(*phead)->link = node;
	}
}
// phead: ����Ʈ�� ��� �������� ������
// p : ���� ���
// node : ���Ե� ��� 
void insert_last(ListNode **phead, ListNode *node) 
{
	if( *phead == NULL ){
		*phead = node;
		node->link = node;
	}
	else {
		node->link = (*phead)->link;
		(*phead)->link = node;
		*phead = node;
	}
}
void display(ListNode *head)
{
	ListNode *p;
	if( head == NULL ) return;

	p = head;
	do {
		printf("%d->", p->data);
		p = p->link;
    } while(p != head);
}
// ���� ���� ����Ʈ �׽�Ʈ ���α׷�
int get_length(ListNode *head) // ����� ���� ���ϴ� �Լ�  
{
	int count = 0;
	ListNode *p;
	if( head == NULL ) 
		return count;

	p = head;
	do {
		//printf("%d->", p->data);
		p = p->link;
		count++;
	} while(p != head);
	return count;
}
main()
{
	ListNode *list1=NULL;
	int count;
	// list1 = 20->10->30
	insert_first(&list1, create_node(10, NULL));
	insert_first(&list1, create_node(20, NULL));
	insert_last(&list1,  create_node(30, NULL));
	display(list1);
	count = get_length(list1);
	printf("The node length of the list %d \n",count);
}
