//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void hollowPyramid(int n);
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    hollowPyramid(n);
//
//    return 0;
//}
//
//void hollowPyramid(int n) {
//    int i,j;
//    if (n != 1) {       //n��1
//        for (i = 0; i <= n - 2; i++)  //��ӡ��һ��
//            printf(" ");
//        printf("1\n");
//        for (j = 2; j <= n-1; j++) {   //��ӡ2��n-1��
//            for (i = 0; i <= n - j - 1; i++)
//                printf(" ");
//            printf("%d", j);
//            for (i = 1; i <= 2 * (j - 1) - 1; i++)
//                printf(" ");
//            printf("%d\n", j);
//        }
//        for (i = 0; i < 2*n - 1; i++)      //��ӡn��
//            printf("%d", n);
//    }
//    if (n == 1)
//        printf("1");
//}