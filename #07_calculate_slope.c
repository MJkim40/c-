//#include<stdio.h>
////�����͸� �̿��� �� ��ȯ�� �̿��� �ڵ带 �ۼ��ϼ���.
//
//int get_line(int x1, int y1, int x2, int y2, float* slope, float* y_intercept);
//
//int main()
//{
//	int a, b, c, d;
//	
//	printf("�� ���� ��ǥ �Է�: \n");
//	scanf_s("%d, %d\n%d, %d", &a, &b, &c, &d);
//
//	float s, y;
//
//	//�� ��ǥ�� x ��ǥ ���� ���� ��, ���⸦ ���� �� ����
//	int p = get_line(a, b, c, d, &s, &y);
//	//get_line �Լ��� ��ȯ���� -1�϶� '���� �߻�' ���
//	if (p == -1) {
//		printf("���� �߻�");
//	}
//	//get_line �Լ��� ��ȯ���� -1�� �ƴҶ� ����� y���� ���
//	if (p != -1) {
//		printf("����: %.2f, y����: %.2f", s, y);
//	}
//	return 0;
//}
//
//// float* = �ּ� �̸�
//// &s = s��� �ڷ����� �ּ�
//int get_line(int x1, int y1, int x2, int y2, float* slope, float* y_intercept)
//{
//	int p;
//	if (x1 != x2) {
//		*slope = (float)((y2 - y1) / (x2 - x1));
//		*y_intercept = y1 - (*slope * x1);
//		p = 2;
//	}
//	else {
//		p = -1;
//	}
//	return p;
//}