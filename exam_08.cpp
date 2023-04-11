#include<stdio.h>

int main(){
	
	//int - 정수 
	//float - 실수
	//char - 문자
	//double - 실수
	
	int x;		//정수형 변수 x선언 
	int y;		//정수형 변수 y선언 
	int sum;	//정수형 변수 sum선언(x, y의 합을 저장할 변수) 
	
	x=100;		// = 는 우변의 값을 좌변에 넣는다 - x변수에 100을 저장한다.  
	y=200;		// = 는 우변의 값을 좌변에 넣는다 - y변수에 200을 저장한다.
	sum = x+y;	
	// = 는 우변의 값을 좌변에 넣는다 - sum변수에 x값과 y값을 더한값을 저장한다. 
	
	printf("두수의 합 : %d", sum);
	return 0;
}
