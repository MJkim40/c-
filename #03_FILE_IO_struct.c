//#define _CRT_SECURE_NO_WARNIGS
//#include <stdio.h>
//
//struct hero {
//	char name[10];
//	int age;
//	float power;
//};
//
//int main() {
//	FILE* fp = NULL;
//	struct hero HERO;
//	printf("HERO ���� �ۼ�\n");
//	struct hero buff[3];
//	printf("Alice ");
//	scanf_s("%d %f", &buff[0].age, &buff[0].power);
//	printf("Charlie ");
//	scanf_s("%d %f", &buff[1].age, &buff[1].power);
//	printf("Michael ");
//	scanf_s("%d %f", &buff[2].age, &buff[2].power);
//	printf("�Է¿Ϸ�\n\n");
//	fread(buff, sizeof(int), 3, fp);
//	for (int i = 0; i < 3; i++) {
//		printf("%c�� power�� �ٽ� �Է��ϼ���: ", buff[i].name);
//		scanf_s("%f", &buff[i].power);
//	}
//	printf("Test.bin ���� ������ open\n");
//	fp = fopen("Test.bin", "wb");
//	for (int j = 0; j < 3; j++) {
//		fwrite(&buff[j], sizeof(int), 3, fp);
//	}
//
//	printf("Test.bin ���� ����\n");
//	
//
//	printf("Test.bin ���� close\n\n");
//	fclose(fp);
//
//	printf("Test.bin ���� �б��� open\n");
//	fp = fopen("Test.bin", "rb");
//	if (fp == NULL) {
//		printf("���� open ����\n");
//		return 1;
//	}
//
//	printf("Test.bin �б� ����\n");
//	printf("---------------------\n");
//	for (int k = 0; k < 3; k++) {
//		printf("%c %d %.1f", buff[k].name, buff[k].age, buff[k].power);
//	}
//	printf("---------------------\n");
//	printf("Test.bin ���� close\n");
//	fclose(fp);
//	return 0;
//}