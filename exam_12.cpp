#include<stdio.h>

int main(){
	int a, b;				//a, b 정수형 변수 선언 
	int sum=0;				//sum 정수형 변수 선언 
	printf("첫번째 숫자를 입력하시오 : ");
	scanf("%d", &a);		//정수형 변수 a에 숫자를 입력한다. 
	printf("두번째 숫자를 입력하시오 : ");
	scanf("%d", &b);		//정수형 변수 b에 숫자를 입력한다.
	sum = a+b;
	printf("두수의 합 : %d", sum);
}
