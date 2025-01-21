#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int number;
    char title[100];
};

int main() {
    struct Book* p;
    int num;

    printf("몇 권의 책이 있나요? ");
    scanf("%d", &num);
    getchar();

    p = (struct Book*)malloc(num * sizeof(struct Book));
    if (p == NULL) {
        printf("메모리 할당 오류\n");
        return 1;
    }

    //구조체 포인터
    for (int i = 0; i < num; i++) {
        (*(p + i)).number = i + 1; 
        printf("책 제목: ");

        int j = 0;
        char c;
        while ((c = getchar()) != '\n' && c != EOF && j < sizeof((*(p + i)).title) - 1) {
            (*(p + i)).title[j++] = c;
        }
        (*(p + i)).title[j] = '\0';
    }

    //간접 멤버 연산자
    for (int i = 0; i < num; i++) {
        (p + i)->number = i + 1; 
        printf("책 제목: ");

        int j = 0;
        char c;
        while ((c = getchar()) != '\n' && c != EOF && j < sizeof((p + i)->title) - 1) {
            (p + i)->title[j++] = c;
        }
        (p + i)->title[j] = '\0';  
    }

    //배열 인덱스
    for (int i = 0; i < num; i++) {
        p[i].number = i + 1; 
        printf("책 제목: ");

        int j = 0;
        char c;
        while ((c = getchar()) != '\n' && c != EOF && j < sizeof(p[i].title) - 1) {
            p[i].title[j++] = c;
        }
        p[i].title[j] = '\0'; 
    }

    //출력
    for (int i = 0; i < num; i++) {
        printf("%d: %s\n", p[i].number, p[i].title);
    }

    free(p);
    return 0;
}