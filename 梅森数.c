//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int prime(int num);
//int main(void) {
//	int isFound,n, num, i;
//	scanf("%d", &n);
//	num = 0,isFound=0;
//	for (i = 2; i<=n; i++) {
//		num = (int)pow(2, i) - 1;
//		if (prime(num)) {
//			printf("%d\n", num);
//			isFound = 1;
//		}
//	}
//	if (isFound == 0)
//		printf("None");
//	return 0;
//}
//
//int prime(int num) {
//	int i;
//	if (num <= 1)
//		return 0;
//	else
//		for (i = 2; i <= sqrt(num); i++) {
//			if (num % i == 0)
//				return 0;
//		}
//	return 1;
//}