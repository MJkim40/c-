#include <stdio.h>

int main()
{
	int a, b, c, max;
	printf("세 정수를 입력하세요: ");
	scanf_s("%d %d %d", &a, &b, &c);

	// 조건문(if-else)을 이용해 세 수 중 가장 큰 수 출력
	if (a > b) {
		if (a > c) {
			max = a;
		}
		else {
			max = c;
		}
	}
	else {
		if (b > c) {
			max = b;
		}
		else {
			max = c;
		}
	}

	printf("가장 큰 수: %d", max);
	return 0;
}
