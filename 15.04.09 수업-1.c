/*
�ۼ���:15.04.09
�ۼ���:201211142 �̵���
���α׷���:4�� ���α׷� 4.12 �ܼ����Ḯ��Ʈ ���α׷�
*/
#include <stdio.h>
#include <stdlib.h>
											
typedef int element;
typedef struct ListNode{
	element data;
	struct ListNode *link;


}ListNode;

void error(char *message)
{

	fprintf(stderr,"%s\n",message);
	exit(1);
}

void insert_node(ListNode **phead, ListNode *p,ListNode *new_node)
{
	//


}

void remove_node(ListNode **phead , ListNode *p, ListNode *removed)
{

	//

}

void display(ListNode *head)
{

}

ListNode *search(ListNode *head, int x)
{


}

ListNode *concat(ListNode *head1, ListNode *head2)
{


}

ListNode *reverse(ListNode *head)
{


}

//��带 �������� �����ϴ� ���α׷�
ListNode *create_node(element data, ListNode *link)
{
	ListNode *new_node;
	new_node = (ListNode*)malloc(sizeof(ListNode));
	if(new_node ==NULL)
		error("�޸� �״� ����");
	new_node->data = data;
	new_node->link = link;

	return(new_node);


}

void main()
{
	ListNode *list1=NULL, *list2=NULL;
	ListNode *p;

	//list1 = 30->20->10

	remove_node(&list1,NULL,list1);
	display(list1);

// list2 = 80->70->60

	insert_node(&list2,NULL,create_node(60,NULL));
	insert_node(&list2,NULL,create_node(70,NULL));
	insert_node(&list2,NULL,create_node(80,NULL));
	display(list2);

	//list1 = list1 +list2
	list1 = concat(list1,list2);
	display(list1);

	// list1 �� ��������
	list1 = reverse(list1);
	display(list1);

	//list1���� 20 Ž��
	p = search(list1,20);
	printf("Ž������ : %d\n",p->data);

	
}