#include <stdio.h>

void main() {
	char type;
	int a, b;
	printf("���� ���ڸ� �����Ұǵ� �ΰ� �Է��غ� �����ؼ� :");
	scanf("%d %d", &a, &b);
	printf("���� ����ҷ�? �����ȣ �Է��غ� :");
	scanf("%c", type);
	getchar();
	switch (type) {
		case '-': printf("%d - %d = %d", a, b, a - b);
		case '+': printf("%d + %d = %d", a, b, a + b);
	}
	return 1;
}