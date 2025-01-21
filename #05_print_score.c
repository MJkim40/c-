//#include <stdio.h>
//
//double print_score(int*, int );
//
////int main()
////{
////	int score[5] = { 90,80,35,77,45 };
////	int sum;
////	printf("%p\n", score);
////	sum = print_score(score, 5);
////
////	printf("total score: %d", sum);
////
////	return 0;
////}
////
//double print_score(int* pointer, int size)
//{
//	// 함수 호출을 이용하여 예시와 같은 출력이 되도록
//	// 함수 본체를 작성하세요.
//	int i = 0;
//	double sum = 0.0;
//	while (i < size)
//	{
//		printf("address: %p\n", (void*)(pointer+i));
//		sum += pointer[i];
//		i++;
//	}
//	return sum;
//}
//
////교수님께서 알려주신 답
//int main()
//{
//	int score[5] = { 90,80,35,77,45 };
//	int sum;
//	printf("%p\n", score);
//	sum = print_score(score, 5);
//
//	printf("total score: %d", sum);
//
//	return 0;
//}
//
//double print_score(int* pointer, int size)
//{
//	int X = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		X += *(pointer + i);
//		printf("address: %p\n", (pointer + i));
//	}
//	return X;
//}