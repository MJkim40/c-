//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct Book {
//	int number;
//	char title[100];
//};
//
//int main() {
//	struct Book* p;
//	int num;
//	//malloc()�� �̿��� ���� �Ҵ�
//	printf("�� ���� å�� �ֳ���? ");
//	scanf("%d", &num);
//	p = (struct Book*)malloc(num * sizeof(struct Book));
//	if (p == NULL) {
//		printf("�޸� �Ҵ� ����\n");
//		return 1;
//	}
//	//����ü ��� ���� �� ����(���� ��� �����)
//	getchar();
//	for (int i = 0; i < num; i++) {
//		printf("å ����: ");
//		fgets((p+i)->title, sizeof((p+i)->title), stdin);
//	}
//	printf("\n\n");
//
//	for (int i = 0; i < num; i++) {
//		printf("%d: %s", i + 1, (p+i)->title);
//	}
//
//	free(p);
//
//	return 0;
//}