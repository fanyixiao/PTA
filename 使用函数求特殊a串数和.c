//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//
//int fn(int a, int n);
//int SumA(int a, int n);
//
//int main()
//{
//    int a, n;
//
//    scanf("%d %d", &a, &n);
//    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
//    printf("s = %d\n", SumA(a, n));
//
//    return 0;
//}
//
//int fn(int a, int n) {
//    int i, num;
//    num = 0;
//    for (i = 0; i < n; i++) {
//        num += a * (int)pow(10, i);
//    }
//    return num;
//}
//
//int SumA(int a, int n) {
//    int i, sum;
//    sum = 0;
//    for (i = 1; i <= n; i++) {
//        sum += fn(a, i);
//    }
//    return sum;
//}