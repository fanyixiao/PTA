//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int isNearlyZero(double num);
//int main(void) {
//	double a, b, c,root,root1,root2,realpart,imagpart,discriminant;
//	scanf("%lf %lf %lf", &a, &b, &c);   //接收a，b，c
//	if (a == 0 && b == 0 && c != 0)    //判断a=b=0，c非0的情况
//		printf("Not An Equation");
//	else if (a == 0 && b == 0 && c == 0)  //判断a,b,c全为0的情况
//		printf("Zero Equation");
//	else if (a == 0 && b != 0) {     //判断a为0，一元一次方程的情况
//		root = -c / b;
//		if (isNearlyZero(root))  //单独输出0.00避免格式错误
//			printf("0.00");
//		else
//			printf("%.2lf", root);
//	}
//	else {                   //正常二元一次方程
//		discriminant = b * b - 4 * a * c;   //求判别式
//		if (discriminant > 0) {    //有两个实数根情况
//			root1 = (-b + sqrt(discriminant)) / (2 * a);
//			root2 = (-b - sqrt(discriminant)) / (2 * a);
//			printf("%.2lf\n%.2lf", root1, root2);
//		}
//		else if (discriminant == 0) {   //一个实数根情况
//			root = -b / (2 * a);
//			printf("%.2lf", root);
//		}
//		else {                   //复数根情况
//			realpart = -b / (2 * a);   //实部
//			imagpart = sqrt(-discriminant)/(2*a);   //虚部
//			if (isNearlyZero(realpart)) {    //实部为0，纯虚根情况
//				printf("0.00+%.2lfi\n0.00-%.2lfi", imagpart, imagpart);
//			}
//			else                //实部非0
//				printf("%.2lf+%.2lfi\n%.2lf-%.2lfi", realpart, imagpart, realpart, imagpart);
//		}
//	}
//	return 0;
//}
//int isNearlyZero(double num) {   //浮点数判断是否为0，避免错误
//	if (num < 1e-9&&num>-1e-9)
//		return 1;
//	return 0;
//}