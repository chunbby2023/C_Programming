#include<stdio.h>

int main(){
	float radius; 					// 원의 반지름 
	float area; 					// 면적
	printf("반지름을 입력하시오 : ");
	scanf("%f", &radius);			//반지름을 입력한다. 
	area = 3.14 * radius * radius;	//원의 면적 구하기 
	printf("원의 면적 : %f", area);	//면적 출력 
}
