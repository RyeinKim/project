#include <stdio.h>

void main() {
	int hour, minute, sec, result;
	printf("�ʸ� �Է��ϼ���:");
	scanf_s("%d", &sec, sizeof(sec));
	minute = sec / 60;
	hour = minute / 60;
	sec = sec % 60;
	printf("%d�� %d�� %d���Դϴ�.\n", hour, minute, sec);
	return 1;
}