/*
�ۼ���:2015.05.11
�ۼ���:201211142 �̵���
���α׷���:p278 ���α׷� 7.6
*/
#include <stdio.h>
typedef struct TreeNode{
	int data;
	struct TreeNode *left,*right;
}TreeNode;


int cal_direc_size(TreeNode *root)
{
	int left_size,right_size;
	
	if( root !=NULL){
		left_size = cal_direc_size(root->left);
		right_size = cal_direc_size(root->right);
		return (root->data+left_size+right_size);
	
	
	}
	return 0;

}

main()
{

	TreeNode n4={500,NULL,NULL};
	TreeNode n5={200,NULL,NULL};
	TreeNode n3={100,&n4,&n5};
	TreeNode n2={50,NULL,NULL};
	TreeNode n1={0,&n2,&n3};

	printf("���丮�� ũ�� = %d\n",cal_direc_size(&n1));
	
}