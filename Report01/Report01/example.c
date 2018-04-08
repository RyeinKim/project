#include <stdio.h>

void main() {
	char type;
	int a, b;
	printf("무슨 숫자를 연산할건데 두개 입력해봐 띄어쓰기해서 :");
	scanf("%d %d", &a, &b);
	printf("무슨 계산할래? 연산기호 입력해봐 :");
	scanf("%c", type);
	getchar();
	switch (type) {
		case '-': printf("%d - %d = %d", a, b, a - b);
		case '+': printf("%d + %d = %d", a, b, a + b);
	}
	return 1;
}