/*
�ۼ���:15.04.02
�ۼ���:201211142 �̵���
���α׷���:3�� ���α׷� 3.6 
*/
#include <stdio.h>

void swap(int *px, int *py);

int main()
{
	int a=1, b=2;

	printf("swap�� ȣ���ϱ��� a = %d , b = %d \n",a,b);
	swap(&a,&b);
	printf("swap �� ȣ���� ���� a = %d , b = %d \n",a,b);


	return 0;
}


void swap(int *px, int *py)
{
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;


}