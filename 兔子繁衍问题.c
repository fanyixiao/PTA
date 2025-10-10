//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////兔子繁衍问题本质为斐波那契数列
//int fb(int num);
//int main(void) {
//	int month, num;
//	scanf("%d", &num);
//	month = 1;
//	while (fb(month) < num) {
//		month++;
//	}
//	printf("%d", month);
//	return 0;
//}
////递归构造斐波那契数列函数
//int fb(int num) {
//	int n;
//	if (num >= 3) {
//		n = fb(num - 1) + fb(num - 2);
//		return n;
//	}
//	else
//		return 1;
//}