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
////ŷ������㷨��������������������ڽ�С������������������������
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