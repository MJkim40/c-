 #include <stdio.h>
 #define _CRT_SECURE_NO_WARNINGS
 // 다양한 자료형 변수를 선언하고 sizeof 연산자를 이용해 변수의 크기를 확인하세요.

 int main(void)
 {
  /* -----------변수 선언----------- */
  // (i) int형 변수 X
  // (ii) short형 변수 Y
  // (iii) long형 변수 Z
  // (iv) float형 변수 A
  // (v) double형 변수 B
  // (vi) char형 변수 C
  /* ------------------------------ */
	int x;
	short y;
	long z;
	float a;
	double b;
	char c;


  /* -----------변수의 크기 측정----------- */
  // (i) 변수 X, Y, Z, A, B, C에 대해 sizeof()연산자 적용
  // (ii) %zu 형식 지정자를 이용해 각 변수의 크기를 출력
  /* ------------------------------ */
	printf("%zu\n", sizeof(x));
	printf("%zu\n", sizeof(y));
	printf("%zu\n", sizeof(z));
	printf("%zu\n", sizeof(a));
	printf("%zu\n", sizeof(b));
	printf("%zu\n", sizeof(c));

	return 0;
 }

