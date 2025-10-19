//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int narcissistic(int number);
//void PrintN(int m, int n);
//
//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
//    PrintN(m, n);
//    if (narcissistic(n)) printf("%d is a narcissistic number\n", n);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int narcissistic(int number) {
//    int i, j, n,temp,sum,cnt,CONST;
//    CONST = number;
//    temp = number;
//    n = 0,sum=0;
//    cnt = 1;
//    while (temp != 0) {
//        temp /= 10;
//        n++;
//    }
//    for (i = 0; i < n; i++) {
//        temp = number % 10;
//        number /= 10;
//        for (j = 0; j < n; j++) {
//            cnt *= temp;
//        }
//        sum += cnt;
//        cnt = 1;
//    }
//    return CONST == sum;
//}
//void PrintN(int m, int n) {
//    int i, j,num;
//    for (i = m+1; i < n; i++) {
//        if (narcissistic(i))
//            printf("%d\n", i);
//    }
//}