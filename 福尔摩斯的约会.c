//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<ctype.h>
//#include<string.h>
//int Decryption(char** p_1,char *p_2,char* DAY);
//int main(void) {
//	char string[4][61],DAY[4],First,Second,Third,*p;   //在main函数定义DAY字符串，以免在函数中定义导致生命周期不足运行完函数后被删除
//	int i, index_1, index_2,j,time;
//	j = 1,i=0;
//	First = 0;
//	scanf("%s %s %s %s", string[0], string[1],string[2], string[3]);
//	index_1 = 0, index_2 = 0;
//	while (1) {     //循环找出前两行对应的两个字符
//		if (string[i][index_1] == string[j][index_1]&&!First&&string[i][index_1]>='A'&&string[i][index_1]<='G') {   
//			First = string[i][index_1];
//		}
//		else if (string[i][index_1] == string[j][index_1]&&First&&(isdigit(string[i][index_1])||(string[i][index_1]>='A'&&string[i][index_1]<='N'))) {
//			Second = string[i][index_1];
//			break;
//		}
//		index_1++;
//	}
//	i = 3, j = 2;
//	while (1) {   //循环找出后两行对应的分钟
//		if (string[j][index_2] == string[i][index_2]&&isalpha(string[j][index_2])) {
//			Third = string[j][index_2];
//			break;
//		}
//		index_2++;
//	}
//	p = &First;
//	time = Decryption(&p, &Second,DAY);
//	printf("%s %02d:%02d", p,time,index_2);
//	return 0;
//}
////对得到的字符解密
//int Decryption(char** p_1, char* p_2,char* DAY) {    //传入指针的指针，使得字符串能传到main函数
//	char First, Second;
//	int day, time;
//	First = **p_1, Second = *p_2;
//	day = First - 'A' + 1;
//	switch (day) {
//	case 1:
//		strcpy(DAY, "MON");
//		break;
//	case 2:
//		strcpy(DAY, "TUE");
//		break;
//	case 3:
//		strcpy(DAY, "WED");
//		break;
//	case 4:
//		strcpy(DAY, "THU");
//		break;
//	case 5:
//		strcpy(DAY, "FRI");
//		break;
//	case 6:
//		strcpy(DAY, "SAT");
//		break;
//	case 7:
//		strcpy(DAY, "SUN");
//		break;
//	}
//	if (isdigit(Second)) 
//		time = Second - '0';
//	else 
//		time = Second - 'A' + 10;
//	*p_1 = DAY;   //传出字符串
//	return time;
//}