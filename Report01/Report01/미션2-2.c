#include <stdio.h>

void main() {
	int hour, minute, sec, result;
	printf("초를 입력하세요:");
	scanf_s("%d", &sec, sizeof(sec));
	minute = sec / 60;
	hour = minute / 60;
	sec = sec % 60;
	printf("%d시 %d분 %d초입니다.\n", hour, minute, sec);
	return 1;
}