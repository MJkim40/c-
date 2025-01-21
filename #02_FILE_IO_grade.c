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
//	//이진 파일을 쓰기 모드로 open
//	fp = fopen("test.bin", "wb");
//	if (fp == NULL) {
//		printf("binary.bin 파일을 열 수 없습니다.");
//		return 1;
//	}
//
//	//배열을 파일에 저장한다.
//	fwrite(table, sizeof(struct student), size, fp);
//	fclose(fp);
//
//	//이진 파일을 읽기 모드로 연다.
//	fp = fopen("test.bin", "rb");
//	if ((fp = fopen("student.dat", "rb")) == NULL) {
//		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n");
//		return 1;
//	}
//	struct student s;
//	for (int i = 0; i < 3; i++) {
//		fread(&s, sizeof(struct student), 1, fp);
//		printf("학번 = %d, 이름 = %c, 평점 = %.2f", s.number, s.name, s.gpa);
//	}
//	fclose(fp);
//
//	return 0;
//}

//교수님 풀이
