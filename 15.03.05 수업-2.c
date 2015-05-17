/*
작성일:15.03.05		
작성자:201211142 이동현
프로그램명:글자순서 거꾸로 출력하는 프로그램
*/

#include <stdio.h>



void unknown();


int main()

{
	unknown();
}
void unknown()
{
	int ch;
	if( (ch = getchar()) != '\n')
		unknown();
	putchar(ch);
}