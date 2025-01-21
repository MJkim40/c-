#include <stdio.h>
#define MAX 4

struct human {
	char name[10];
	int age;
	float power;
};

int main() {
	struct human Hero[MAX] = { {"Alice", 22, 8.2}, {"Bob", 28, 9.3}, {"Charlie", 21, 7.6}, {"David", 29, 8.1} };
	struct human temp;

	temp = Hero[0];
	Hero[0] = Hero[3];
	Hero[3] = temp;
	temp = Hero[2];
	Hero[2] = Hero[3];
	Hero[3] = temp;

	for (int i = 0; i < MAX; i++) {
		printf("%d: %s %d %.1f\n", i, Hero[i].name, Hero[i].age, Hero[i].power);
	}
}