#include <stdio.h>

void main() {
	int a, b;
	char c;
	printf("ù��° ������ �Է��ϼ���: ");
	scanf("%d", &a);
	printf("�ι��� ������ �Է��ϼ���: ");
	scanf("%d", &b);
	getchar();
	printf("������ ������ �Է��ϼ���: ");
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
			if (b == 0) { printf("����"); }
			else { printf("%d / %d = %d", a, b, a / b); }
			break;
		}
	}
	else { printf("������ ���� 3�� �̻��� �Է��� �� �����ϴ�.\n"); }
	return 0;
}