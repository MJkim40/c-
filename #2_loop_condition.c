#include <stdio.h>

int main() {
    int menu = 0;
    float celsius;
    int fahr;

    printf("[ȭ��-���� ��ȯ ���α׷�]\n");
    printf("Menu 1) ȭ�� --> ����\n");
    printf("Menu 2) ���� --> ȭ��\n");
    printf("Menu 3) ���α׷� ����\n\n");

    // �µ� ��ȯ ���α׷��� ����ڰ� �Է��� �޴��� 3�� ��쿡�� ����
    // 3�� �ƴ� ���ڸ� �Է��ϸ� ����ؼ� ����
    while (1) {
        //����ڰ� �Է��� ���ڸ� ������ ����
        printf("menu�� �����ϼ���) ");
        scanf_s("%d", &menu);

        //�Է��� ���ڿ� ���� 2~5���� ������ ����
        if (menu == 1) {
            printf("ȭ�� �µ� �Է�: ");
            scanf_s("%d", &fahr);
            celsius = (fahr - 32) * 5 / 9;
            printf("%d F �� %.5f C�Դϴ�.\n\n", fahr, celsius);
        }
        else if (menu == 2) {
            printf("���� �µ� �Է�: ");
            scanf_s("%f", &celsius);
            fahr = celsius * 9 / 5 + 32;
            printf("%.5f C �� %d F�Դϴ�.\n\n", celsius, fahr);
        }
        else if (menu == 3) {
            printf("���α׷��� �����մϴ�.\n");
            break;
        }
        else {
            printf("�ùٸ� ��ȣ�� �Է��ϼ���.\n\n");
        }
    }

    return 0;
}