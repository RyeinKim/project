#include <stdio.h>

void main() {
	double num;
	printf("inch : ");
	scanf("%lf", &num);
	printf("%.2lfcm\n", num * 2.54);
	return 0;
}