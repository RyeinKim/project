#include <stdio.h>

void main() {
	double a, b;
	printf("ù��° ������ �Է��ϼ���: ");
	scanf("%lf", &a);
	printf("�ι��� ������ �Է��ϼ���: ");
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
	else { printf("������ ���� 3�� �̻��� �Է��� �� �����ϴ�.\n"); }
	return 0;
}