#include <stdio.h>

void main() {
	char type;
	printf("사용할 연산기호를 선택하세요.\n1. -\n2. +\n3. *\n4. /\n");
	scanf("%c", &type);
	if (type == '-')
	{
		int a, b;
		printf("정수 2개를 입력하세요.");
		scanf("%d %d", &a, &b);
		if (a >= -30000 && 30000 >= a && b >= -30000 && 30000 >= b)
		{
			printf("%d-%d=%d\n", a, b, a-b);
		}
		else { printf("정수는 각각 절댓값 3만을 넘을 수 없습니다.\n"); }
	}
	else if (type == '+')
	{
		int a, b;
		printf("정수 2개를 입력하세요.");
		scanf("%d %d", &a, &b);
		if (a >= -30000 && 30000 >= a && b >= -30000 && 30000 >= b)
		{
			printf("%d+%d=%d\n", a, b, a+b);
		}
		else { printf("정수는 각각 절댓값 3만을 넘을 수 없습니다.\n"); }
	}
	else if (type == '*')
	{
		int a, b;
		printf("정수 2개를 입력하세요.");
		scanf("%d %d", &a, &b);
		if (a >= -30000 && 30000 >= a && b >= -30000 && 30000 >= b)
		{
			printf("%dX%d=%d\n", a, b, a*b);
		}
		else { printf("정수는 각각 절댓값 3만을 넘을 수 없습니다.\n"); }
	}
	else if (type == '/')
	{
		double a, b;
		printf("정수 2개를 입력하세요.");
		scanf("%lf %lf", &a, &b);
		if (a >= -30000 && 30000 >= a && b >= -30000 && 30000 >= b)
		{
			if (b == 0)
			{
				printf("error\n");
			}
			else
			{
				printf("%.0lf/%.0lf=%.4lf\n", a, b, a / b);
			}
		}
		else { printf("정수는 각각 절댓값 3만을 넘을 수 없습니다.\n"); }
	}
	else { printf("올바른 연산기호를 입력하지 않았습니다.\n"); }
	return 0;
}