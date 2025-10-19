//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//struct intput {
//	long int a1, b1, a2, b2;
//}num;
//long int gcb(long int num1,long int num2);
//int output(long int numerator,long int denominator);
//int main(void) {
//	long int i,integer1,integer2;
//	scanf("%ld/%ld %ld/%ld", &num.a1, &num.b1, &num.a2, &num.b2);
//	for (i = 0; i <= 3; i++) {
//		output(num.a1, num.b1);
//		switch (i) {
//		case 0:
//			printf(" + ");
//			break;
//		case 1:
//			printf(" - ");
//			break;
//		case 2:
//			printf(" * ");
//			break;
//		case 3:
//			printf(" / ");
//			break;
//		}
//		output(num.a2, num.b2);
//		printf(" = ");
//		switch (i) {
//		case 0:
//			output(num.a1 * num.b2 + num.a2 * num.b1, num.b1 * num.b2);
//			printf("\n");
//			break;
//		case 1:
//			output(num.a1 * num.b2 - num.a2 * num.b1, num.b1 * num.b2);
//			printf("\n");
//			break;
//		case 2:
//			output(num.a1 * num.a2, num.b1 * num.b2);
//			printf("\n");
//			break;
//		case 3:
//			output(num.a1 * num.b2, num.a2 * num.b1);
//			printf("\n");
//			break;
//		}
//	}
//	return 0;
//}
//
//long int gcd(long int num1, long int num2) {
//	long int num;
//	if (num2 == 0) return num1;
//	while (num1 % num2 != 0) {
//		num = num1 % num2;
//		num1 = num2;
//		num2 = num;
//	}
//	if (num1 % num2 == 0)
//		num = num2;
//	return num;
//}
//int output(long int numerator, long int denominator) {
//	long int integer,num;
//	if (numerator == 0) {
//		printf("0");
//		return 0;
//	}
//	if (denominator < 0) {
//		numerator *= -1;
//		denominator *= -1;
//	}
//	if (denominator == 0) {
//		printf("Inf");
//		return 0;
//	}
//	integer = numerator / denominator;
//	int is_negative = (numerator < 0);
//	numerator %= denominator;
//	if (numerator < 0)
//		numerator = -numerator;
//	num = (long int)abs(gcd(numerator, denominator));
//	numerator /= num;
//	denominator /= num;
//	if (is_negative)
//		printf("(");
//	if (integer != 0) {
//		if (numerator != 0)
//			printf("%ld %ld/%ld", integer, numerator, denominator);
//		else if (numerator == 0)
//			printf("%ld", integer);
//	}
//	else if (integer == 0) {
//		if (is_negative)
//			numerator = -numerator;
//		printf("%ld/%ld", numerator, denominator);
//	}
//	if (is_negative)
//		printf(")");
//	return 0;
//}