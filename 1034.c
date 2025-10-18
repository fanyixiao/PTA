#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
struct intput {
	int a1, b1, a2, b2;
}num;
int gcb(int num1,int num2);
int output(int numerator,int denominator);
int main(void) {
	int i,integer1,integer2;
	scanf("%d/%d %d/%d", &num.a1, &num.b1, &num.a2, &num.b2);
	for (i = 0; i <= 3; i++) {
		output(num.a1, num.b1);
		switch (i) {
		case 0:
			printf(" + ");
			break;
		case 1:
			printf(" - ");
			break;
		case 2:
			printf(" * ");
			break;
		case 3:
			printf(" / ");
			break;
		}
		output(num.a2, num.b2);
		printf(" = ");
		switch (i) {
		case 0:
			output(num.a1 * num.b2 + num.a2 * num.b1, num.b1 * num.b2);
			printf("\n");
			break;
		case 1:
			output(num.a1 * num.b2 - num.a2 * num.b1, num.b1 * num.b2);
			printf("\n");
			break;
		case 2:
			output(num.a1 * num.a2, num.b1 * num.b2);
			printf("\n");
			break;
		case 3:
			output(num.a1 * num.b2, num.a2 * num.b1);
			printf("\n");
			break;
		}
	}
	return 0;
}

int gcb(int num1, int num2) {
	int num;
	while (num1 % num2 != 0) {
		num = num1 % num2;
		num1 = num2;
		num2 = num;
	}
	if (num1 % num2 == 0)
		num = num2;
	return num;
}
int output(int numerator, int denominator) {
	int integer,num;
	if (denominator < 0) {
		numerator *= -1;
		denominator *= -1;
	}
	else if (denominator == 0) {
		printf("Inf");
		return 0;
	}
	integer = numerator / denominator;
	if (numerator == 0) {
		printf("0");
		return 0;
	}
	if(integer<0)
		numerator = abs(numerator);
	numerator -= abs(integer) * denominator;
	num = abs(gcb(numerator, denominator));
	numerator /= num;
	denominator /= num;
	if (numerator < 0||integer<0)
		printf("(");
	if (integer != 0) {
		if (numerator != 0)
			printf("%d %d/%d", integer, numerator, denominator);
		else if (numerator == 0)
			printf("%d", integer);
	}
	else if (integer == 0)
		printf("%d/%d", numerator, denominator);
	if (numerator < 0||integer<0)
		printf(")");
	return 0;
}