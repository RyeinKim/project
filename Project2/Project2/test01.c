#include <stdio.h>

void main() {
	char type;
	printf("����� �����ȣ�� �����ϼ���.\n1. -\n2. +\n3. *\n4. /\n");
	scanf("%c", &type);
	if (type == '-')
	{
		int a, b;
		printf("���� 2���� �Է��ϼ���.");
		scanf("%d %d", &a, &b);
		if (a >= -30000 && 30000 >= a && b >= -30000 && 30000 >= b)
		{
			printf("%d-%d=%d\n", a, b, a-b);
		}
		else { printf("������ ���� ���� 3���� ���� �� �����ϴ�.\n"); }
	}
	else if (type == '+')
	{
		int a, b;
		printf("���� 2���� �Է��ϼ���.");
		scanf("%d %d", &a, &b);
		if (a >= -30000 && 30000 >= a && b >= -30000 && 30000 >= b)
		{
			printf("%d+%d=%d\n", a, b, a+b);
		}
		else { printf("������ ���� ���� 3���� ���� �� �����ϴ�.\n"); }
	}
	else if (type == '*')
	{
		int a, b;
		printf("���� 2���� �Է��ϼ���.");
		scanf("%d %d", &a, &b);
		if (a >= -30000 && 30000 >= a && b >= -30000 && 30000 >= b)
		{
			printf("%dX%d=%d\n", a, b, a*b);
		}
		else { printf("������ ���� ���� 3���� ���� �� �����ϴ�.\n"); }
	}
	else if (type == '/')
	{
		double a, b;
		printf("���� 2���� �Է��ϼ���.");
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
		else { printf("������ ���� ���� 3���� ���� �� �����ϴ�.\n"); }
	}
	else { printf("�ùٸ� �����ȣ�� �Է����� �ʾҽ��ϴ�.\n"); }
	return 0;
}