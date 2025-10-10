//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int Kaprekar(int num, int* p);
//int main(void) {
//	int num,max,min,*p,i;
//	scanf("%d", &num);
//	p = &min;
//	i=1;
//	do {
//		max = Kaprekar(num,p);
//		printf("%d: %d - %d = %d\n", i, max, min, max - min);
//		num = max - min;
//		i++;
//		if (num == 0) {
//			return 0;
//		}
//	} while (num != 495);
//	return 0;
//}
//int Kaprekar(int num, int* p) {
//	int max,min,a, b, c,x,y,z;
//	c = num % 10;
//	b = num / 10 % 10;
//	a = num / 100 % 10;
//	if (a >= b) {
//		if (a >= c) {
//			x = a;
//			if (b >= c) {
//				y = b, z = c;
//			}
//			else
//				y = c, z = b;
//		}
//		else
//			x = c, y = a, z = b;
//	}
//	else {
//		if (b >= c) {
//			x = b;
//			if (a >= c)
//				y = a, z = c;
//			else
//				y = c, z = a;
//		}
//		else
//			x = c, y = b, z = a;
//	}
//	max = x * 100 + y * 10 + z;
//	min = z * 100 + y * 10 + x;
//	*p = min;
//	return max;
//}