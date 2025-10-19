//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int fib(int n);
//void PrintFN(int m, int n);
//
//int main()
//{
//    int m, n, t;
//
//    scanf("%d %d %d", &m, &n, &t);
//    printf("fib(%d) = %d\n", t, fib(t));
//    PrintFN(m, n);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
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
//void PrintFN(int m, int n) {
//    int Have_FN, i, j,temp,cnt;
//    Have_FN = 0;
//    j = 0;
//    temp = 0;
//    cnt = 0;
//    for (i = m; i <= n; i++) {
//        if (i == 1) {
//            Have_FN = 1;
//            printf("1 1");
//            cnt = 1;
//            continue;
//        }
//        do {
//            if (fib(j) == i) {
//                Have_FN = 1;
//                if (!cnt) {
//                    cnt = 1;
//                    printf("%d", i);
//                }
//                else
//                    printf(" %d", i);
//                temp = j;
//                break;
//            }
//            j++;
//        } while (fib(j) <= i);
//        j = temp;
//    }
//    if (!Have_FN)
//        printf("No Fibonacci number");
//}