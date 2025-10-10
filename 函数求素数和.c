//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int prime(int p);
//int PrimeSum(int m, int n);
//
//int main()
//{
//    int m, n, p;
//
//    scanf("%d %d", &m, &n);
//    printf("Sum of ( ");
//    for (p = m; p <= n; p++) {
//        if (prime(p) != 0)
//            printf("%d ", p);
//    }
//    printf(") = %d\n", PrimeSum(m, n));
//
//    return 0;
//}
//
//int prime(int p) {
//    int i;
//    if (p <= 1)
//        return 0;
//
//    for (i = 2; i <= sqrt(p); i++) {      //开平方优化，若一个数不是素数，则一定有小于其平方根的因数
//        if (p % i == 0)
//            return 0;
//    }
//    return 1;
//}
//int PrimeSum(int m, int n) {
//    int i, sum;
//    sum = 0;
//    for (i = m; i <= n; i++) {
//        if (prime(i)) {
//            sum += i;
//        }
//    }
//    return sum;
//
//}