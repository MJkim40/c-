//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int* list;
//	int i, students, sum = 0;
//
//	printf("�л��� ��: ");
//	scanf("%d", &students);
//
//	list = (int*)malloc(students * sizeof(int));
//
//	if (list == NULL) {
//		printf("���� �޸� �Ҵ� ����\n");
//		exit(1);
//	}
//
//	for (i = 0; i < students; i++) {
//		printf("�л� #%d ����: ", i + 1);
//		scanf("%d", &list[i]);
//		sum += list[i];
//	}
//
//	float avg = (float)sum / students;
//	printf("���� ���=%.2f", avg);
//
//	return 0;
//}