/*
�ۼ���:�̵���
�ۼ���:2012.10.12
���α׷���:���ھ߱� ���� 
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
 int play1, play2, play3, play4; //�÷��̾ �Է��ϴ� ����
 int com1, com2, com3, com4; //��ǻ�Ͱ� �����ϴ� ����
 int i; // �� �̴� 
 int Strike=0, Ball=0; //Strike Ball�� ��Ÿ���°�
  printf("�� ������ ������ ���ھ߱��Դϴ�");
 printf("9ȸ������ ��ȸ�� �־����� ��ǻ�Ͱ� ���ϴ� 4���� ���ڸ� ���߽ø� �˴ϴ�.");
 srand((unsigned)time(NULL)); // ������ �ջ� ����
 com1 = rand()%9+1;
 com2 = rand()%9+1;
 com3 = rand()%9+1;
 com4 = rand()%9+1;
 
 for(i=1;i<10;i++)
 {
 
   Strike = Ball = 0;
   printf("%dȸ�Դϴ�.\n",i);
   printf("ù��° �ڸ� ���� : ");
   scanf("%d", &play1);
   printf("�ι�° �ڸ� ���� : ");
   scanf("%d", &play2);
   printf("����° �ڸ� ���� : ");
   scanf("%d,", &play3);
   printf("�׹�° �ڸ� ���� : ");
   scanf("%d", &play4);
 
   if(play1==com1)
   {
   printf("Strike�Դϴ�\n");
   Strike++;
   }
 
   else if(play1==com2||play1==com3||play1==com4)
   {
   printf("Ball�Դϴ�\n");
   Ball++;
   }
 
   if(play2==com2)
   {
   printf("Strike�Դϴ�\n");
   Strike++;
   }
 
   else if(play2==com1||play2==com3||play2==com4)
   {
   printf("Ball�Դϴ�\n");
   Ball++;
   }
 
   if(play3==com3)
   {
   printf("Strike�Դϴ�\n");
   Strike++;
   }
 
   else if(play3==com1||play3==com2||play3==com4)
   {
   printf("Ball�Դϴ�\n");
   Ball++;
   }
 
   if(play4==com4)
   {
   printf("Strike�Դϴ�\n");
   Strike++;
   }
 
   else if(play4==com1||play4==com2||play4==com3)
   {
   printf("Ball�Դϴ�\n");
   Ball++;
   }
 
   if(play1==com1&&play2==com2&&play3==com3&&play4==com4)
   {
   printf("�����Դϴ�.\n");
   break;
   }
   printf("%d Strike %d Ball�Դϴ�.\n", Strike, Ball);
 }
 return 0;  // ���α׷� ����
}
 
