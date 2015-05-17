/*
�ۼ���: �̵���
�ۼ���:15.05.07
���α׷���: p272 ���α׷� 7.3 ���α׷� 
*/
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode{
	int data;
	struct TreeNode *left , *right;

}TreeNode;

//	15
// 4		20
//1			  16  25	

TreeNode n1={1,NULL,NULL};
TreeNode n2={4,&n1,NULL};
TreeNode n3={16,NULL,NULL};
TreeNode n4={25,NULL,NULL};
TreeNode n5={20,&n3,&n4};
TreeNode n6={15,&n2,&n5};
TreeNode *root = &n6;

//���� ��ȸ
void inorder (TreeNode *root)
{
	if(root)
	{
		inorder(root ->left);
		printf("%d",root->data);
		inorder(root ->right);
	
	}


}

//���� ��ȸ
void preorder( TreeNode *root)
{
	if(root)
	{
		printf("%d",root->data);
		preorder(root->left);
		preorder(root->right);
	}

}

//���� ��ȸ
void postorder( TreeNode *root)
{
	if(root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d",root->data);
	}

}

void main()
{
	inorder(root);
	preorder(root);
	postorder(root);


}