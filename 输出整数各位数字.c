// #define _CRT_SECURE_NO_WARNINGS
// #include<stdio.h>
// #include<math.h>
// int main(void) {
// 	int a,num, n, term,i;
// 	scanf("%d", &num);
// 	n = 0;
// 	term = num;
// 	if (num == 0) {
// 		printf("0 ");
// 		return 0;
// 	}
// 	while (term != 0) {
// 		term /= 10;
// 		n++;
// 	}
// 	for (i = n; i > 0; i--) {
// 		a = (num / (int)pow(10, i-1)) % 10;
// 		printf("%d ", a);
// 	}
//     return 0;
// }