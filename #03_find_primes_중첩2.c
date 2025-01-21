//#include <stdio.h>
//
//int main()
//{
//	int start;
//	int end;
//	int count = 0;
//	int prime;
//	printf("범위를 입력하세요: ");
//	scanf_s("%d %d", &start, &end);
//	printf("%d ~ %d 사이 소수 찾기\n", start, end);
//	for (int i=start; i <= end; i++) {
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
//			if (count % 10 == 0) {
//				printf("\n");
//			}
//		}
//	}
//}