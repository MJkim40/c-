#include <stdio.h>
// ��� �Լ��� �����Ͽ� 1���� 5������ ���� ����ϼ���.
// ex. sum(4) = 10

// �Լ� ����
int sum(int);

int main(void)
{
	int num = 5;
	printf("sum(%d) = %d", num, sum(num));
	return 0;
}

// �Լ� ����
int sum(int x)
{
	x = (x == 0) ? 0 : x + sum(x - 1);
	//(x == 1) ? sum(x) = 1, sum(x) = x + sum(x - 1);
	//x = x + sum(x - 1);
	//sum(1) = 1;
	return x;
}
// ���ǿ����� �̿�, ��� ��ȯ 
//int sum(int x)
//{
//	(x == 1) ? sum(x) = 1, sum(x) = x + sum(x - 1);
//	return x;
//}


