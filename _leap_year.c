#include<stdio.h>

int main()
{
	int year;

	printf("연도 입력: ");
	scanf_s("%d", &year);


	// 조건문(if-else if-else)을 이용한 윤년여부 판단
	// (1) 4로 나누어 떨어지지만 100으로 나누어 떨어지지 않으면 윤년
	// (2) 400으로 나누어 떨어지면 윤년
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		printf("%d 년은 윤년입니다.",  year);
	}
	else {
		printf("%d 년은 윤년이 아닙니다." , year);
	}
	return 0;
}
