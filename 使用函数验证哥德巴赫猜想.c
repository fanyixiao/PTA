//#define _CRT_SECURE_NO_WARNINGS
//#include <math.h>
//#include<stdio.h>
//
//int prime(int p);
//void Goldbach(int n);
//
//int main()
//{
//    int m, n, i, cnt;
//
//    scanf("%d %d", &m, &n);
//    if (prime(m) != 0) printf("%d is a prime number\n", m);
//    if (m < 6) m = 6;
//    if (m % 2) m++;
//    cnt = 0;
//    for (i = m; i <= n; i += 2) {
//        Goldbach(i);
//        cnt++;
//        if (cnt % 5) printf(", ");
//        else printf("\n");
//    }
//
//    return 0;
//}
//
//int prime(int p) {
//    int i;
//    if (p <= 1)
//        return 0;
//    for (i = 2; i <= sqrt(p); i++) {
//        if (p % i == 0)
//            return 0;
//    }
//    return 1;
//}
//void Goldbach(int n) {
//    int i, num1, num2;
//    num1 = 0, num2 = 0;
//    for (i = 2; i <= n/2; i++) {
//        if (prime(i)&&prime(n-i)) {
//            num1 = i, num2 = n - i;
//            break;
//        }
//    }
//    printf("%d=%d+%d", n, num1, num2);
//}