//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define size 3
//
//struct student {
//	int number;
//	char name[20];
//	double gpa;
//};
//
//int main() {
//	struct student table[size] = { {1, "KIM", 3.99},{2, "Min", 2.68}, {3, "LEE", 4.01} };
//	struct student s1;
//	FILE* fp = NULL;
//	
//	//���� ������ ���� ���� open
//	fp = fopen("test.bin", "wb");
//	if (fp == NULL) {
//		printf("binary.bin ������ �� �� �����ϴ�.");
//		return 1;
//	}
//
//	//�迭�� ���Ͽ� �����Ѵ�.
//	fwrite(table, sizeof(struct student), size, fp);
//	fclose(fp);
//
//	//���� ������ �б� ���� ����.
//	fp = fopen("test.bin", "rb");
//	if ((fp = fopen("student.dat", "rb")) == NULL) {
//		fprintf(stderr, "�Է��� ���� ������ �� �� �����ϴ�.\n");
//		return 1;
//	}
//	struct student s;
//	for (int i = 0; i < 3; i++) {
//		fread(&s, sizeof(struct student), 1, fp);
//		printf("�й� = %d, �̸� = %c, ���� = %.2f", s.number, s.name, s.gpa);
//	}
//	fclose(fp);
//
//	return 0;
//}

//������ Ǯ��
