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
//	// �Լ� ȣ���� �̿��Ͽ� ���ÿ� ���� ����� �ǵ���
//	// �Լ� ��ü�� �ۼ��ϼ���.
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
////�����Բ��� �˷��ֽ� ��
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