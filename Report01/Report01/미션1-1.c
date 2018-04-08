#include <stdio.h>

void main() {
	char name[31];
	printf("안녕하세요, 이름이 어떻게 되시나요? ");
	scanf("%s", name);
	printf("환영합니다, %s 님!", name);
	return 0;
}