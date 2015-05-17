/*
작성자:이동현
작성일:2012.10.12
프로그램명:숫자야구 게임 
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
 int play1, play2, play3, play4; //플레이어가 입력하는 숫자
 int com1, com2, com3, com4; //컴퓨터가 산출하는 숫자
 int i; // 각 이닝 
 int Strike=0, Ball=0; //Strike Ball을 나타내는거
  printf("이 게임의 제목은 숫자야구입니다");
 printf("9회까지의 기회가 주어지며 컴퓨터가 정하는 4개의 숫자를 맞추시면 됩니다.");
 srand((unsigned)time(NULL)); // 데이터 손상 방지
 com1 = rand()%9+1;
 com2 = rand()%9+1;
 com3 = rand()%9+1;
 com4 = rand()%9+1;
 
 for(i=1;i<10;i++)
 {
 
   Strike = Ball = 0;
   printf("%d회입니다.\n",i);
   printf("첫번째 자리 숫자 : ");
   scanf("%d", &play1);
   printf("두번째 자리 숫자 : ");
   scanf("%d", &play2);
   printf("세번째 자리 숫자 : ");
   scanf("%d,", &play3);
   printf("네번째 자리 숫자 : ");
   scanf("%d", &play4);
 
   if(play1==com1)
   {
   printf("Strike입니다\n");
   Strike++;
   }
 
   else if(play1==com2||play1==com3||play1==com4)
   {
   printf("Ball입니다\n");
   Ball++;
   }
 
   if(play2==com2)
   {
   printf("Strike입니다\n");
   Strike++;
   }
 
   else if(play2==com1||play2==com3||play2==com4)
   {
   printf("Ball입니다\n");
   Ball++;
   }
 
   if(play3==com3)
   {
   printf("Strike입니다\n");
   Strike++;
   }
 
   else if(play3==com1||play3==com2||play3==com4)
   {
   printf("Ball입니다\n");
   Ball++;
   }
 
   if(play4==com4)
   {
   printf("Strike입니다\n");
   Strike++;
   }
 
   else if(play4==com1||play4==com2||play4==com3)
   {
   printf("Ball입니다\n");
   Ball++;
   }
 
   if(play1==com1&&play2==com2&&play3==com3&&play4==com4)
   {
   printf("정답입니다.\n");
   break;
   }
   printf("%d Strike %d Ball입니다.\n", Strike, Ball);
 }
 return 0;  // 프로그램 종료
}
 
