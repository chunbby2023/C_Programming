#include<stdio.h>

int main(){
	double value;			//실수형 변수 value 선언 
	
	scanf("%lf", &value);	//실수형 변수  value에 실수를 입력 
	printf("%.2lf", value);	//실수형 변수를 소수점 2번째 자리까지 출력
}
