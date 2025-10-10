//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int gcd(int x, int y);
//
//int main()
//{
//    int x, y;
//
//    scanf("%d %d", &x, &y);
//    printf("%d\n", gcd(x, y));
//
//    return 0;
//}
////欧几里得算法：两整数的最大公因数等于较小数与两数相除余数的最大公因数
//int gcd(int x, int y) {
//    int num;
//    while (x % y != 0) {
//        num = x % y;
//        x = y;
//        y = num;
//    }
//    if (x % y == 0)
//        num = y;
//    return num;
//}