#include <stdio.h> 


int main(void){
 	int c;
	double result;
 	printf("- ���� �µ��� ȭ�� �µ��� ��ȯ�ϴ� ���α׷� -\n���� �µ��� �Է��ϼ���: ");
 	scanf_s("%d", &c);
 	result = 1.8*c + 32;
 	printf("%.2lf", result);
	return 0;
}
