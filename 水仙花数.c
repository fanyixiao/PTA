// #define _CRT_SECURE_NO_WARNINGS
// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// int isArmstrong(int num,int n);
// int main(void) {
// 	int n, num, i,*digit;
// 	scanf("%d", &n);
// 	for (i = pow(10, n-1); i < pow(10, n); i++) {
// 		if (isArmstrong(i,n))
// 			printf("%d\n", i);
// 	}
// 	return  0;
// }
// int isArmstrong(int num,int n) {
// 	int sum = 0,digit;
// 	int originalNum = num;
// 	while (num != 0) {
// 		digit = num % 10;
// 		num /= 10;
// 		sum += (int)pow(digit, n);
// 	}
// 	return sum == originalNum;
// }