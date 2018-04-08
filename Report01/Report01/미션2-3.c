#include <stdio.h> 


int main(void){
 	int c;
	double result;
 	printf("- 섭씨 온도를 화씨 온도로 변환하는 프로그램 -\n섭씨 온도를 입력하세요: ");
 	scanf_s("%d", &c);
 	result = 1.8*c + 32;
 	printf("%.2lf", result);
	return 0;
}
