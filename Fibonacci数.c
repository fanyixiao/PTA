//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int fib(int n);

//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    printf("%d\n", fib(n));
//
//    return 0;
//}
//使用迭代算法
//int fib(int n) {
//    int num1,num2,num;
//    int i;
//    num1 = num2 = 1;
//    num = 0;
//    if (n <= 2) {
//        num = 1;
//    }
//    else {
//        for (i = 2; i <= n; i++) {
//            num = num + num2;   //计算n项fib数
//            num2 = num1;    //num2取得n-1项fib数供n+1项fib数计算
//            num1 = num;    //num1中介存储n项fib数
//        }
//    }
//    return num;
//
//}

//使用递归算法
//int fib(int n) {
//    int num;
//    if (n >= 3) {
//        return num = fib(n - 1) + fib(n - 2);
//    }
//    else {
//        num = 1;
//    }
//    return num;
//}