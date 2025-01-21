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
//	//malloc()을 이용한 동적 할당
//	printf("몇 권의 책이 있나요? ");
//	scanf("%d", &num);
//	p = (struct Book*)malloc(num * sizeof(struct Book));
//	if (p == NULL) {
//		printf("메모리 할당 오류\n");
//		return 1;
//	}
//	//구조체 멤버 변수 값 대입(간접 멤머 연산사)
//	getchar();
//	for (int i = 0; i < num; i++) {
//		printf("책 제목: ");
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