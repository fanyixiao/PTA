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
//ʹ�õ����㷨
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
//            num = num + num2;   //����n��fib��
//            num2 = num1;    //num2ȡ��n-1��fib����n+1��fib������
//            num1 = num;    //num1�н�洢n��fib��
//        }
//    }
//    return num;
//
//}

//ʹ�õݹ��㷨
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