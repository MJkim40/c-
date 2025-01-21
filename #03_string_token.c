//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdio.h>
//
//char s[] = "Man is immortal, because he has a soul";
//char seps[] = " ,"; //구분할 문자
//char* token; //token이라는 포인터 변수, 주소값만 들어갈 수 있음
//
//int main() {
//	token = strtok(s, seps); //s라고 하는 문자열 안에서 
//	while (token != NULL) {
//		printf("토큰: %s\n", token); //string 토큰 사용은 권장하지 않음
//		token = strtok(NULL, seps);
//	}
//	return 0;
//}