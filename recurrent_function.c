#include <stdio.h>
// 재귀 함수를 정의하여 1부터 5까지의 합을 출력하세요.
// ex. sum(4) = 10

// 함수 선언
int sum(int);

int main(void)
{
	int num = 5;
	printf("sum(%d) = %d", num, sum(num));
	return 0;
}

// 함수 정의
int sum(int x)
{
	x = (x == 0) ? 0 : x + sum(x - 1);
	//(x == 1) ? sum(x) = 1, sum(x) = x + sum(x - 1);
	//x = x + sum(x - 1);
	//sum(1) = 1;
	return x;
}
// 조건연산자 이용, 결과 반환 
//int sum(int x)
//{
//	(x == 1) ? sum(x) = 1, sum(x) = x + sum(x - 1);
//	return x;
//}


