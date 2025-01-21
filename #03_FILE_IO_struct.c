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
//	printf("HERO 정보 작성\n");
//	struct hero buff[3];
//	printf("Alice ");
//	scanf_s("%d %f", &buff[0].age, &buff[0].power);
//	printf("Charlie ");
//	scanf_s("%d %f", &buff[1].age, &buff[1].power);
//	printf("Michael ");
//	scanf_s("%d %f", &buff[2].age, &buff[2].power);
//	printf("입력완료\n\n");
//	fread(buff, sizeof(int), 3, fp);
//	for (int i = 0; i < 3; i++) {
//		printf("%c의 power를 다시 입력하세요: ", buff[i].name);
//		scanf_s("%f", &buff[i].power);
//	}
//	printf("Test.bin 파일 쓰기모드 open\n");
//	fp = fopen("Test.bin", "wb");
//	for (int j = 0; j < 3; j++) {
//		fwrite(&buff[j], sizeof(int), 3, fp);
//	}
//
//	printf("Test.bin 쓰기 시작\n");
//	
//
//	printf("Test.bin 파일 close\n\n");
//	fclose(fp);
//
//	printf("Test.bin 파일 읽기모드 open\n");
//	fp = fopen("Test.bin", "rb");
//	if (fp == NULL) {
//		printf("파일 open 실패\n");
//		return 1;
//	}
//
//	printf("Test.bin 읽기 시작\n");
//	printf("---------------------\n");
//	for (int k = 0; k < 3; k++) {
//		printf("%c %d %.1f", buff[k].name, buff[k].age, buff[k].power);
//	}
//	printf("---------------------\n");
//	printf("Test.bin 파일 close\n");
//	fclose(fp);
//	return 0;
//}