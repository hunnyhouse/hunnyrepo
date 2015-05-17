/*
작성일:2015.05.11
작성자:201211142 이동현
프로그램명:281 프로그램 7.8 퀴즈-1
*/

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

#define max(a,b) (((a) > (b)) ? (a) : (b))
typedef struct TreeNode{

	int data;
	struct TreeNode *left,*right;
}TreeNode;	
	
	TreeNode n1= {1,NULL,NULL};
	TreeNode n2 = {4,&n1,NULL};
	TreeNode n3 = {16,NULL,NULL};
	TreeNode n4 = {25,NULL,NULL};
	TreeNode n5 = {20,&n3,&n4};
	TreeNode n6 = {15,&n2,&n5};
	TreeNode *root = &n6;
	

int get_height(TreeNode *node)
{
	int height=0;
	if( node !=NULL)
		height = 1+max(get_height(node->left),(get_height(node->right)));

}

int get_node_count(TreeNode *node)
{
	int count=0;
	if(node !=NULL)
		count = 1+get_node_count(node->left) + get_node_count(node->right);
}

int get_noneleaf_count(TreeNode *node)
{
	
	int count=0;
	if(node !=NULL)
	{
		if(node->left == NULL && node->right ==NULL)
			return 0;
		else 
			count = 1+get_noneleaf_count(node->left)+get_noneleaf_count(node->right);
	}
	return count;
}

void main()
{
	
	printf("%d\n",get_height(&n6));
	printf("비단말노드의 개수 = %d\n",get_noneleaf_count(root));

}
