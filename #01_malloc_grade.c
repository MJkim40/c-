#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int* list;
	int i, students, sum = 0;

	printf("학생의 수: ");
	scanf("%d", &students);

	list = (int*)malloc(students * sizeof(int));

	if (list == NULL) {
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	for (i = 0; i < students; i++) {
		printf("학생 #%d 성적: ", i + 1);
		scanf("%d", &list[i]);
		sum += list[i];
	}

	float avg = (float)sum / students;
	printf("성적 평균=%.2f", avg);

	return 0;
}
