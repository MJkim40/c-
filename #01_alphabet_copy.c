//#include <stdio.h>
//
//int main() {
//	char line[100] = "##@computer##";
//	char line2[100] = "";
//	
//	int k = 0;
//	for (int i = 0; line[i] != '\0' ; ++i) {
//		while (line[i] >= 'A' && line[i] <= 'z') { //'A'�� �ƽ�Ű�ڵ� ���� ����, 'z'�� �ƽ�Ű�ڵ� ���� ŭ
//			line2[k++] = line[i++]; //line2�� k��° �ε����� line�� i��° �ε����� �ν�
//		}
//	}
//	line2[k] = '\0'; //'null'���ڰ� ���� ���¿��� ������ �־���
//
//	printf("�Է� ���ڿ�: %s\n", line); 
//	printf("��� ���ڿ�: %s", line2); //�츮�� ������ ��
//
//	return 0;
//}