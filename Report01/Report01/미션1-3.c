#include <stdio.h>

void main() {
	int a, b;
	char c;
	printf("첫번째 정수를 입력하세요: ");
	scanf("%d", &a);
	printf("두번쨰 정수를 입력하세요: ");
	scanf("%d", &b);
	getchar();
	printf("수행할 연산을 입력하세요: ");
	scanf("%c", &c);
	if (a >= -30000 && 30000 >= a && b >= -30000 && 30000 >= b) {
		switch (c) {
		case '-':		
			printf("%d - %d = %d\n", a, b, a - b);
			break;
		case '+':
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		case '*':
			printf("%d * %d = %d\n", a, b, a*b);
			break;
		case '/':
			if (b == 0) { printf("오류"); }
			else { printf("%d / %d = %d", a, b, a / b); }
			break;
		}
	}
	else { printf("정수는 절댓값 3만 이상을 입력할 수 없습니다.\n"); }
	return 0;
}