//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int isPerfect(int num,int factors[]);
//int main(void) {
//	int m, n,num,factors[1000], i,j,hasPerfect;
//	scanf("%d %d", &m, &n);
//	hasPerfect = 0;
//	for (i = m; i <= n; i++) {
//		if (isPerfect(i,factors)) {
//			hasPerfect = 1;
//			j = 0;
//			printf("%d = ", i);
//			while (factors[j] != -1) {
//				printf("%d", factors[j++]);
//				if (factors[j] != -1)
//					printf(" + ");
//			}
//			printf("\n");
//		}
//	}
//	if (hasPerfect==0)
//		printf("None");
//	return 0;
//}
////判断是否为完数，并存储因数进数组
//int isPerfect(int num,int factors[]) {
//	int i,index,sum;
//	index = 0,sum=0;
//	for (i = 1; i < num; i++) {
//		if (num % i == 0) {
//			factors[index++] = i;
//			sum += i;
//		}
//	}
//	factors[index] = -1; //用-1标记因子数组结束
//	return sum == num;
//}