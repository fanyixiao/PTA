// #define _CRT_SECURE_NO_WARNINGS
// #include<stdio.h>
// int judge(int num);
// int main(void) {
// 	int i,m, n;
// 	scanf("%d %d", &m, &n);
// 	if (m >= 100 && m <= n && n <= 999) {
// 		for (i = m; i <= n; i++) {
// 			if (judge(i))
// 				printf("%d\n", i);
// 		}
// 	}
// 	else
// 		printf("Invalid Value.");
// 	return 0;
// }
// int judge(int num) {
// 	int x, y, z;
// 	x = num % 10;
// 	y = (num / 10) % 10;
// 	z = num / 100;
// 	if (x * x * x + y * y * y + z * z * z == num)
// 		return 1;
// 	else
// 		return 0;
// }