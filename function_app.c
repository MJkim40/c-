//#include <stdio.h>
//
//// main()�Լ��� ��� ����� value of x: 300�� �ǵ���
//// function1�� function2�� �����ϼ���.
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
//// function1�� 22° ���ο� ���� x�� ���ԵǴ� ���� ���� 
//// ���ǿ����ڸ� �̿�, ����� ��ȯ
//int function1(int x)
//{
//	printf("function1 �Լ��� ȣ���\n");
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
//// function2�� �μ��� ¦������ �Ǵ��Ͽ� �� ����� ��ȯ�Ѵ�.
//// ¦���̸� 2 ��ȯ, Ȧ���̸� 3 ��ȯ
//int function2(int x)
//{
//	printf("function2 �Լ��� ȣ���\n");
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
