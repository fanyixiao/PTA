//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int prime(int num);
//int PrimeSum(int m, int n,int *p);
//int main(void) {
//	int m, n,num,sum;
//	num = 0;
//	scanf("%d %d", &m, &n);
//	sum = PrimeSum(m, n, &num);
//	printf("%d %d", num, sum);
//	return 0;
//}
////判断素数
//int prime(int num) {
//	int i;
//	if (num <= 1)
//		return 0;
//	else {
//		for (i = 2; i <= sqrt(num); i++) {
//			if (num % i == 0)
//				return 0;
//		}
//	}
//	return 1;
//}
////求和同时使用指针对素数计数传回总和与数量
//int PrimeSum(int m, int n,int *p) {
//	int sum = 0;
//	for (m; m <= n; m++) {
//		if (prime(m)) {
//			(*p)++;   
//			sum += m;
//		}
//	}
//	return sum;
//}