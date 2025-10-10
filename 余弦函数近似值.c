//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//double funcos(double e, double x);
//
//int main()
//{
//    double e, x;
//
//    scanf("%lf %lf", &e, &x);
//    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
//
//    return 0;
//}
//初始版本
//double funcos(double e, double x) {
//    int i, n;
//    double num,cos,fact;
//    num = 0,cos=0;
//    n = 1;
//    do {
//          计算阶乘
//        fact = 1;       
//        if (n == 1) {
//            fact = 1;
//        }
//        else {
//            for (i = 2; i <= 2 * (n - 1);i++) {
//                fact *= i;
//            }
//        }
// 
//        num = pow(x, (double)2.0 * (n - 1)) / fact;    //计算每一项num
//        
//        if (n % 2 == 1) {
//            cos = cos + num;
//        }
//        else
//            cos = cos - num;
//        n++;
//    } while (fabs(num) >= e);
//    return cos;
//}

//优化版
//double funcos(double e, double x) {
//    int n;
//    double sum, term,square;
//    square = x * x;
//    n = 0;
//    term = 1;
//    sum = 1;
//    do {
//        n++;
//        //计算当前项
//        term *= -square / ((2*n - 1) * (2*n));
//        //累加
//        sum += term;
//    } while (fabs(term) >= e);
//    return sum;
//}