/*
작성일:15.04.09
작성자:201211142 이동현
프로그램명:4장 프로그램 4.15 원형연결리스트 프로그램
*/
#include <stdio.h>
#include <stdlib.h>


typedef int element;
typedef struct ListNode { 
	element data;
	struct ListNode *link;   	
} ListNode; 


// 노드를 동적으로 생성하는 프로그램
ListNode *create_node(element data, ListNode *link)
{
	ListNode *new_node;
	new_node = (ListNode *)malloc(sizeof(ListNode)); 
	if( new_node == NULL ) {
		fprintf(stderr, "메모리 할당 에러\n");
		exit(1);
	}
	new_node->data = data;
	new_node->link = link;
	return(new_node);
}

// phead: 리스트의 헤드 포인터의 포인터
// p : 선행 노드
// node : 삽입될 노드 
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
// phead: 리스트의 헤드 포인터의 포인터
// p : 선행 노드
// node : 삽입될 노드 
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
// 원형 연결 리스트 테스트 프로그램
int get_length(ListNode *head) // 노드의 수를 구하는 함수  
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
