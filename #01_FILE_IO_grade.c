#include <stdio.h>

int main() {
	FILE* file;
	char name[20];
	int score, count = 0, total = 0;

	file = fopen("grades.txt", "r");
	if (file == NULL) {
		printf("������ �� �� �����ϴ�.\n");
		return 1;
	}

	while (fscanf(file, "%s %d", name, &score) != EOF) {
		count++;
		total += score;
	}

	fclose(file);
	if (count > 0) {
		printf("��� ����: %.2f\n", (float)total / count);
	}
	else {
		printf("���� �����Ͱ� �����ϴ�.\n");
	}


	return 0;
}
