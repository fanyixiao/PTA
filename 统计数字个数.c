//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int CountDigit(int number, int digit);
//
//int main()
//{
//    int number, digit;
//
//    scanf("%d %d", &number, &digit);
//    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
//
//    return 0;
//}
//
//int CountDigit(int number, int digit) {
//    int count, term;
//    count = 0;
//    term = number;
//    if (term < 0)    //�ж�number�Ƿ�Ϊ��
//        term = -term;
//    while (term!=0) {       //��λ����
//        if (term % 10 == digit) {
//            count++;
//        }
//        term = term / 10;
//    }
//    //�ж�number�Ƿ�Ϊ0
//    if (number == 0)
//        count++;
//    return count;
//}