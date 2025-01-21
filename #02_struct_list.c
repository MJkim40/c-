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
//		printf("학번을 입력하시오: ");
//		scanf_s("%d", &list[i].number);
//		getchar();
//		printf("이름을 입력하시오: ");
//		gets_s(list[i].name, sizeof(list[i].name));
//		printf("소속을 입력하시오: ");
//		gets_s(list[i].dept, sizeof(list[i].dept));
//		printf("\n");
//	}
//	printf("==================================\n");
//	for (i = 0; i < SIZE; i++) {
//		printf("학번: %d, 이름: %s, 학과: %s\n", list[i].number, list[i].name, list[i].dept);
//	}
//	printf("==================================\n");
//	return 0;
//}