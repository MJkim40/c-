//#include <stdio.h>
//
//// main()함수의 출력 결과가 value of x: 300이 되도록
//// function1과 function2를 정의하세요.
//
//int function1(int);
//int function2(int);
//
//int main(void)
//{
//	int x = 0;
//	int y = 3;
//	x = function1(y);
//	printf("value of x: %d\n", x);
//	return 0;
//}
//
//// function1은 22째 라인에 의해 x에 대입되는 값에 따라 
//// 조건연산자를 이용, 결과를 반환
//int function1(int x)
//{
//	printf("function1 함수가 호출됨\n");
//	x = function2(x);
//	/*if (x == 2)
//	{
//		x = x * 150;
//	}
//	else if (x != 2)
//	{
//		x = x * 100;
//	}*/
//	x = (x == 2) ? x * 150 :x * 100;
//	return x;
//
//}
//
//// function2는 인수에 짝수인지 판단하여 그 결과를 반환한다.
//// 짝수이면 2 반환, 홀수이면 3 반환
//int function2(int x)
//{
//	printf("function2 함수가 호출됨\n");
//	//if (x % 2 == 0)
//	//{
//	//	x = 2;
//	//}
//	//else if (x % 2 != 0)
//	//{
//	//	x = 3;
//	//}
//	x = (x % 2 == 0) ? 2 : 3;
//	return x;
//}
//
