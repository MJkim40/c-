#include <stdio.h>

int main() {
	float celsius;
	int fahr = 0;
	while (fahr < 101) {
		celsius = (fahr - 32) * 5 / 9;
		printf("%3d F = %5.1f C\n", fahr, celsius);
		fahr = fahr + 10;
	}
	return 0;
}
