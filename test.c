/*
�ۼ���: �̵���
�ۼ���:15.05.07
���α׷���: p263 ���α׷� 7.1 ������ ���� 
*/
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode{
	int data;
	struct TreeNode *left,*right;
}TreeNode;
//				n1
//				/ |
//				n2 n3

void main()
{
	TreeNode *n1,*n2,*n3,*n4;
	n1 = (TreeNode *)malloc(sizeof(TreeNode));
	n2 = (TreeNode *)malloc(sizeof(TreeNode));
	n3 = (TreeNode *)malloc(sizeof(TreeNode));
	n4 = (TreeNode *)malloc(sizeof(TreeNode));

	n1->data = 10;
	n1->left  = NULL;
	n1->right = n2;

	n2->data = 20;
	n2->left = NULL;
	n2->right = NULL;
	
	n3->data = 30;
	n3->left = NULL;
	n3->right = 30L;

	n4->data = NULL;
	n4->left = 25;
	n4->right = NULL;

	printf("%d %d %d ",n1->data,n1->left,n1->right);


}


