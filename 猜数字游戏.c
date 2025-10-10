//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void) {
//	int num0, n,i,num1,judge;
//	judge = 0;
//	scanf("%d %d", &num0, &n);
//	for (i = 1; i <= n; i++) {
//		scanf("%d", &num1);
//		if (num1 < 0) {
//			printf("Game Over");
//			return 0;
//		}
//		else if (num1 < num0) {
//			printf("Too small\n");
//			continue;
//		}
//		else if (num1 > num0) {
//			printf("Too big\n");
//			continue;
//		}
//		else if (num1 == num0) {
//			if (i == 1) {
//				printf("Bingo!\n");
//				judge = 1;
//				break;
//			}
//			else if (i <= 3) {
//				printf("Lucky You!\n");
//				judge = 1;
//				break;
//			}
//			else if (i > 3) {
//				printf("Good Guess!\n");
//				judge = 1;
//				break;
//			}
//		}
//	}
//	if (judge == 0)
//		printf("Game Over");
//	return 0;
//}