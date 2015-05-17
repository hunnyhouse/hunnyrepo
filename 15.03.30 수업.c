/*
�ۼ���:15.03.30
�ۼ���:201211142 �̵���
���α׷���:3�� ���α׷� 3.3 ����
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_TERMS 101
struct {
	float coef;
	int expon;
}terms[MAX_TERMS] = {{8,3},{7,1},{1,0},{10,3},{3,2},{1,0}};
int avail =6;
// �ΰ� ���� �� 

char compare(int a,int b)
{
	if(a>b) return '>';
	else if(a==b) return '=';
	else return '<';

}

// ���ο� ���� ���׽Ŀ� �߰� 

void attach(float coef, int expon)
{
	if(avail>MAX_TERMS){
		fprintf(stderr,"���� ������ �ʹ� ���� \n");
		exit(1);
	
	}

	terms[avail].coef=coef;
	terms[avail++].expon=expon;

}

//C = A+B

void poly_add2(int As, int Ae, int Bs, int Be, int *Cs, int *Ce)
{
	float tempcoef;
	*Cs = avail;
	while(As <= Ae && Bs <= Be)
		switch(compare(terms[As].expon, terms[Bs].expon))
	{
		case '>' : // A�� ���� > B����
			attach(terms[As].coef, terms[Bs].expon);
			As++;
			break;

		case '=': 
			tempcoef = terms[As].coef + terms[Bs].coef;
			if(tempcoef)
				attach(tempcoef,terms[As].expon);
			As++; Bs++;
			break;
	
		case '<':
			attach(terms[Bs].coef, terms[Bs].expon);
			Bs++;
			break;
	
	}

	for(;As<=Ae; As++)
		attach(terms[As].coef, terms[As].expon);

	for(;Bs<=Be; Bs++)
		attach(terms[Bs].coef, terms[Bs].expon);
	*Ce = avail -1;

}
void print_poly(int As, int Ae)
{
	while(As<=Ae) {
		printf("%dx^%d",terms[As].coef , terms[As].expon);
		if(As<Ae)
			printf(" + ");
		As++;	
	
	}


}

int cal_poly(int As, int Ae, int x)
{
	int i, sum=0 , temp;
	while(As<=Ae){
		temp = 1;
		for(i=0; i<terms[As].expon; i++)
			temp *= x;
		sum += terms[As].coef*temp;
		As++;
	
	
	}

	return sum;
}

	void main()
	{
		int Cs,Ce;
		poly_add2(0,2,3,5,&Cs,&Ce);
		print_poly(0,5);

		printf("�� ���� ���� ����� %d �Դϴ�.\n",cal_poly(0,5,3));
	
	}