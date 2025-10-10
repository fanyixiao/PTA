//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int MonthDays(int year, int month);
//
//int main()
//{
//    int ndays, month, year;
//
//    scanf("%d", &year);
//    for (month = 1; month <= 12; month++) {
//        ndays = MonthDays(year, month);
//        printf("%d ", ndays);
//    }
//
//    return 0;
//}
//
//int MonthDays(int year, int month) {
//    int days;
//    _Bool leap;
//    //ÅÐ¶ÏÊÇ·ñÊÇÈòÄê
//    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//        leap = 1;
//    }
//    else
//        leap = 0;
//    
//    if (month == 4 || month == 6 || month == 9 || month == 11)
//        days = 30;
//    else if (month == 2) {
//        if (leap)
//            days = 29;
//        else
//            days = 28;
//    }
//    else
//        days = 31;
//    return days;
//}