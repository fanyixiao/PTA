//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////���ӷ������Ȿ��Ϊ쳲���������
//int fb(int num);
//int main(void) {
//	int month, num;
//	scanf("%d", &num);
//	month = 1;
//	while (fb(month) < num) {
//		month++;
//	}
//	printf("%d", month);
//	return 0;
//}
////�ݹ鹹��쳲��������к���
//int fb(int num) {
//	int n;
//	if (num >= 3) {
//		n = fb(num - 1) + fb(num - 2);
//		return n;
//	}
//	else
//		return 1;
//}