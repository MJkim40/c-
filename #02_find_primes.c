//#include <stdio.h>
//
//int main()
//{
//	int number;
//	int prime;
//	int count=0;
//	printf("소수를 찾을 범위를 입력: ");
//	scanf_s("%d", &number);
//	for (int i = 2; i <= number; i++) {
//		prime = 1;
//		for (int j = 2; j < i; j++) {
//			if (i % j == 0) {
//				prime = 0;
//				break;
//			}
//		}
//		if (prime == 1) {
//			printf("%d\t", i);
//			count++;
//			if (count % 10 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//}