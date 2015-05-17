/*
작성일:15.03.16
작성자:201211142 이동현
프로그램명: 2장 순환알고리즘을 이용하여 프로그램 2.6 피보나치 수열 프로그램 
*/

#include <stdio.h>


int fib(int n)
{
	if( n == 0) return 0;
	else if( n== 1) return 1;
	else return (fib(n-1) + fib(n-2));
}

int main()
{
	printf("%d\n",fib(5));


}