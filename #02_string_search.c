#include <string.h>
#include <stdio.h>

int main() {
	char s[] = "A bird in hand is worth two in the bush";
	char sub[] = "bird";
	char* p; //p는 주소값만 넣을 수 있음
	int loc;
	//배열들의 인덱스는 0부터 시작
	//포인터 변수 = 주소값
	p = strstr(s, sub); //p라고 하는 포인터 변수에 strstr값을 넣을 것
	if (p == NULL) //
		printf("%s가 발견되지 않았음\n", sub);
	else { //int형의 변수는 index를 표현하기 위한 변수
		loc = (int)(p - s); //지금 상태로는 2라고하는 정수값을 가질 것
		printf("%s에서 첫 번째 %s가 %d에서 발견되었음\n", s, sub, loc);
	}
	return 0;
}
