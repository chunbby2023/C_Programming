#include<stdio.h>

int main()
{
	int a, b, c, d, x, y;
	x=20;		//좌변의 값을 우변에 넣는다, x=20을 넣는다. 
	y=10;		//좌변의 값을 우변에 넣는다, y=10을 넣는다. 
	
	a=x+y;		//a = 합구하는 변수 
	b=x-y;		//b = 차 구하느 변수 
	c=x*y;		//c = 곱 구하는 변수 
	d=x/y;		//d = 몫 구하는 변수 
	
	printf("두수의 합 : %d\n", a);
	printf("두수의 차 : %d\n", b);
	printf("두수의 곱 : %d\n", c);
	printf("두수의 몫 : %d\n", d);
}
