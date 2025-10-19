//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int factorsum(int number);
//void PrintPN(int m, int n);
//
//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    if (factorsum(m) == m) printf("%d is a perfect number\n", m);
//    if (factorsum(n) == n) printf("%d is a perfect number\n", n);
//    PrintPN(m, n);
//
//    return 0;
//}
//
//int factorsum(int number) {
//    int i, num;
//    num = 1;
//    if (number == 1)
//        return 0;
//    for (i = 2; i <= number / 2; i++) {
//        if (number % i == 0)
//            num += i;
//    }
//    return num;
//}
//void PrintPN(int m, int n) {
//    int i, j, Have_Perfect;
//    Have_Perfect = 0;
//    for (i = m; i <= n; i++) {
//        if (factorsum(i) == i) {
//            Have_Perfect = 1;
//            printf("%d = 1", i);
//            for (j = 2; j <= i / 2; j++) {
//                if (i % j == 0) {
//                    printf(" + %d", j);
//                }
//            }
//            printf("\n");
//        }
//    }
//    if (!Have_Perfect)
//        printf("No perfect number");
//}