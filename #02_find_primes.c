#include <stdio.h>

int main()
{
	int number;
	int prime;
	int count=0;
	printf("¼Ò¼ö¸¦ Ã£À» ¹üÀ§¸¦ ÀÔ·Â: ");
	scanf_s("%d", &number);
	for (int i = 2; i <= number; i++) {
		prime = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				prime = 0;
				break;
			}
		}
		if (prime == 1) {
			printf("%d\t", i);
			count++;
			if (count % 10 == 0)
			{
				printf("\n");
			}
		}
	}
}
