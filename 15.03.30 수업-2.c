/*
�ۼ���:15.03.30
�ۼ���:201211142 �̵���
���α׷���:3�� quiz ����ü�� ���� ������ ���ϱ�
*/

#include <stdio.h>
#include <math.h>

typedef struct
{
	float x;
	float y;
} point;

float get_distance(float x1, int x2);

int main()
{
	float result_x,result_y;

	point p1,p2;

	p1.x = 1;
	p1.y = 2;

	p2.x = 9;
	p2.y = 8;

	result_x = get_distance(p1.x,p2.x);
	result_y = get_distance(p1.y,p2.y);

	sqrt(result_x+result_y);

	printf("(%.2lf.%.2lf)  (%.2lf.%.2lf)  �� ������ �Ÿ��� %.2lf �Դϴ�.\n",p1.x,p1.y,p2.x,p2.y,sqrt(result_x+result_y));
	return 0;
}

float get_distance(float x1, int x2)
{
	return (x2-x1)*(x2-x1);
}