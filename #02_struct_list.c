//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define SIZE 3
//
//struct student {
//	int number;
//	char name[20];
//	char dept[30];
//};
//
//int main() {
//	struct student list[SIZE];
//	int i;
//
//	for (i = 0; i < SIZE; i++) {
//		printf("�й��� �Է��Ͻÿ�: ");
//		scanf_s("%d", &list[i].number);
//		getchar();
//		printf("�̸��� �Է��Ͻÿ�: ");
//		gets_s(list[i].name, sizeof(list[i].name));
//		printf("�Ҽ��� �Է��Ͻÿ�: ");
//		gets_s(list[i].dept, sizeof(list[i].dept));
//		printf("\n");
//	}
//	printf("==================================\n");
//	for (i = 0; i < SIZE; i++) {
//		printf("�й�: %d, �̸�: %s, �а�: %s\n", list[i].number, list[i].name, list[i].dept);
//	}
//	printf("==================================\n");
//	return 0;
//}