#include <stdio.h>

void main() {
	double a, b;
	printf("첫번째 정수를 입력하세요: ");
	scanf("%lf", &a);
	printf("두번쨰 정수를 입력하세요: ");
	scanf("%lf", &b);
	if (a >= -30000 && 30000 >= a && b >= -30000 && 30000 >= b) {
		if (b != 0){
			printf("%.0lf + %.0lf = %.0lf\n", a, b, a + b);
			printf("%.0lf - %.0lf = %.0lf\n", a, b, a - b);
			printf("%.0lf * %.0lf = %.0lf\n", a, b, a*b);
			printf("%.0lf / %.0lf = %.4lf\n", a, b, a / b);
		}
		else {
			printf("%.0lf + %.0lf = %.0lf\n", a, b, a + b);
			printf("%.0lf - %.0lf = %.0lf\n", a, b, a - b);
			printf("%.0lf * %.0lf = %.0lf\n", a, b, a*b);
		}
	}
	else { printf("정수는 절댓값 3만 이상을 입력할 수 없습니다.\n"); }
	return 0;
}