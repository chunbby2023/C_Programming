#include<stdio.h>

int main(){
	int a, b;		//계산할 값을 저장할 변수 선언
	a = 10;
	b = 2;
	printf("%d + %d = %d\n", a, b, a+b);	//a, b를 더한 값을 출력 
	printf("%d - %d = %d\n", a, b, a-b);	//a, b를 뺀 값을 출력
	printf("%d * %d = %d\n", a, b, a*b);	//a, b를 곱한 값을 출력 
	printf("%d / %d = %d\n", a, b, a/b);	//a, b를 나눈 값을 출력
	printf("%d %% %d = %d\n", a, b, a%b);	//a, b를 나머지 값을 출력
	return 0;
}
