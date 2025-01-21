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

    printf("�� ���� å�� �ֳ���? ");
    scanf("%d", &num);
    getchar();

    p = (struct Book*)malloc(num * sizeof(struct Book));
    if (p == NULL) {
        printf("�޸� �Ҵ� ����\n");
        return 1;
    }

    //����ü ������
    for (int i = 0; i < num; i++) {
        (*(p + i)).number = i + 1; 
        printf("å ����: ");

        int j = 0;
        char c;
        while ((c = getchar()) != '\n' && c != EOF && j < sizeof((*(p + i)).title) - 1) {
            (*(p + i)).title[j++] = c;
        }
        (*(p + i)).title[j] = '\0';
    }

    //���� ��� ������
    for (int i = 0; i < num; i++) {
        (p + i)->number = i + 1; 
        printf("å ����: ");

        int j = 0;
        char c;
        while ((c = getchar()) != '\n' && c != EOF && j < sizeof((p + i)->title) - 1) {
            (p + i)->title[j++] = c;
        }
        (p + i)->title[j] = '\0';  
    }

    //�迭 �ε���
    for (int i = 0; i < num; i++) {
        p[i].number = i + 1; 
        printf("å ����: ");

        int j = 0;
        char c;
        while ((c = getchar()) != '\n' && c != EOF && j < sizeof(p[i].title) - 1) {
            p[i].title[j++] = c;
        }
        p[i].title[j] = '\0'; 
    }

    //���
    for (int i = 0; i < num; i++) {
        printf("%d: %s\n", p[i].number, p[i].title);
    }

    free(p);
    return 0;
}