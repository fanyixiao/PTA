//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int isNearlyZero(double num);
//int main(void) {
//	double a, b, c,root,root1,root2,realpart,imagpart,discriminant;
//	scanf("%lf %lf %lf", &a, &b, &c);   //����a��b��c
//	if (a == 0 && b == 0 && c != 0)    //�ж�a=b=0��c��0�����
//		printf("Not An Equation");
//	else if (a == 0 && b == 0 && c == 0)  //�ж�a,b,cȫΪ0�����
//		printf("Zero Equation");
//	else if (a == 0 && b != 0) {     //�ж�aΪ0��һԪһ�η��̵����
//		root = -c / b;
//		if (isNearlyZero(root))  //�������0.00�����ʽ����
//			printf("0.00");
//		else
//			printf("%.2lf", root);
//	}
//	else {                   //������Ԫһ�η���
//		discriminant = b * b - 4 * a * c;   //���б�ʽ
//		if (discriminant > 0) {    //������ʵ�������
//			root1 = (-b + sqrt(discriminant)) / (2 * a);
//			root2 = (-b - sqrt(discriminant)) / (2 * a);
//			printf("%.2lf\n%.2lf", root1, root2);
//		}
//		else if (discriminant == 0) {   //һ��ʵ�������
//			root = -b / (2 * a);
//			printf("%.2lf", root);
//		}
//		else {                   //���������
//			realpart = -b / (2 * a);   //ʵ��
//			imagpart = sqrt(-discriminant)/(2*a);   //�鲿
//			if (isNearlyZero(realpart)) {    //ʵ��Ϊ0����������
//				printf("0.00+%.2lfi\n0.00-%.2lfi", imagpart, imagpart);
//			}
//			else                //ʵ����0
//				printf("%.2lf+%.2lfi\n%.2lf-%.2lfi", realpart, imagpart, realpart, imagpart);
//		}
//	}
//	return 0;
//}
//int isNearlyZero(double num) {   //�������ж��Ƿ�Ϊ0���������
//	if (num < 1e-9&&num>-1e-9)
//		return 1;
//	return 0;
//}