#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
void main() {
	setlocale(LC_ALL, "RUS");
	double x, y, z, h;
	puts("¬ведите x");
	scanf("%lf", &x);
	puts("¬ведите y");
	scanf("%lf", &y);
	puts("¬ведите z");
	scanf("%lf", &z);
	h = (pow(x, y + 1) + exp(y - 1)) / (1 + x * fabs(y - tan(z))) * (1 + fabs(y - x)) + (pow(fabs(y - x), 2) / 2) - (pow(fabs(y - x), 3) / 3);
	printf("–езультат вычислени€: %.5lf", h);
}