#include <stdio.h>

int find_prime(int);

int main()
{
	int start, end, count = 0;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d %d", &start, &end);
	printf("%d~%d ���� �Ҽ� ã��\n", start, end);

	for (int i = start; i <= end; i++) {
		if (find_prime(i) == 1) {
			printf("%d\t", i);
			count++;
			if (count % 10 == 0) {
				printf("\n");
			}
		}
	}
	return 0;
}
int find_prime(int number) {
	int prime = 1;
	for (int j = 2; j < number; j++) {
		if (number % j == 0) {
			prime = 0;
			break;
		}
	}
	return prime;
}