//#include <string.h>
//#include <stdio.h>
//
//int main() {
//	char s[] = "A bird in hand is worth two in the bush";
//	char sub[] = "bird";
//	char* p; //p�� �ּҰ��� ���� �� ����
//	int loc;
//	//�迭���� �ε����� 0���� ����
//	//������ ���� = �ּҰ�
//	p = strstr(s, sub); //p��� �ϴ� ������ ������ strstr���� ���� ��
//	if (p == NULL) //
//		printf("%s�� �߰ߵ��� �ʾ���\n", sub);
//	else { //int���� ������ index�� ǥ���ϱ� ���� ����
//		loc = (int)(p - s); //���� ���·δ� 2����ϴ� �������� ���� ��
//		printf("%s���� ù ��° %s�� %d���� �߰ߵǾ���\n", s, sub, loc);
//	}
//	return 0;
//}