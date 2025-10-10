//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<stdbool.h>
//bool* searchPrime(int num);
//int main(void) {
//	int i,num,j;
//	bool* prime;
//	scanf("%d", &num);
//	prime=searchPrime(num);
//	for (i = 0; i <= num/2; i++) {
//		if (prime[i] == true&&prime[num-i]==true) {
//			printf("%d = %d + %d", num, i, num-i);
//			free(prime);
//			prime = NULL;
//			return 0;
//		}
//	}
//	free(prime);
//	prime = NULL;
//	return 0;
//}
// //°£À­ÍÐÉ«ÄáÉ¸·¨
//bool* searchPrime(int num) {
//	int i,j;
//	bool* Prime;
//	Prime = (bool*)malloc(sizeof(bool)*(num + 1));
//	for (i = 0; i <= num; i++)
//		Prime[i] = true;
//	Prime[0] = Prime[1] = false;
//	for (i = 2; i <= sqrt(num); i++) {
//		if (Prime[i]==1){
//			for (j = i * i; j <= num; j += i) {
//				Prime[j] = false;
//			}
//		}
//	}
//	return Prime;
//}