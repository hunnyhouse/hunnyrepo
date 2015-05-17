/*
작성일:15.04.06
작성자:201211142 이동현
프로그램명:4장 프로그램 4.4에 quiz 추가 프로그램
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_LIST_SIZE 100 

typedef int element;
typedef struct {
	int list[MAX_LIST_SIZE];
	int length;
}ArrayListType;

    void error(char *message);
	void init(ArrayListType *L);
	int is_empty(ArrayListType *L);
	int is_full(ArrayListType *L);
	void display(ArrayListType *L);
	void add(ArrayListType *L , int position, element item);
	element Delete(ArrayListType *L , int position);
	void clear(ArrayListType *L);
	void replace(ArrayListType *L,int position, element item);
	element get_entry(ArrayListType *L,int position);
	int get_length(ArrayListType*L);

	
void main()
{
	ArrayListType list1,*plist;
	



	init(&list1);
	add(&list1,0,10);
	add(&list1,0,20);
	add(&list1,0,30);
	display(&list1);

	plist = (ArrayListType *)malloc(sizeof(ArrayListType));
	init(plist);
	add(plist,0,10);
	add(plist,0,20);
	add(plist,0,30);
	display(plist);
	free(plist);

}
void error(char *message)
{



}

void init(ArrayListType *L)
{
	L->length =0;


}
int is_empty(ArrayListType *L)
{

	return L->length ==0;

}

int is_full(ArrayListType *L)
{

	return L->length = MAX_LIST_SIZE;

}
void display(ArrayListType *L)
{


}
	
void add(ArrayListType *L , int position, element item)
{

}	
element Delete(ArrayListType *L , int position)
{
	int i;
	element item;

	if(position <0 || position >= L->length)
		error("위치오류");
	item = L->list[position];
	
	for(i=position; i<(L->length-1); i++)
		L->list[i] = L->list[i+1];
	  L->length--;

	return item;
}
void clear(ArrayListType *L)
{
	L->length =0;

}
void replace(ArrayListType *L,int position, element item)
{
	
	//if( 0 <= position && position < MAX_LIST_SIZE)
	if(0<=position && position < (L->length -1)) 
    {
		L->list[position] = item;
 
    }
 
    else
		 error("위치오류");

}

element get_entry(ArrayListType *L,int position)
{
	
	if( 0 <= position || position <(L->length-1))
 
    {
 
        error("위치오류");
 
    }
 
    return L->list[position];


}


int get_length(ArrayListType*L)
 
{
 
    return L->length;
 
}

