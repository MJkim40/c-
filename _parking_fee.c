//#include<stdio.h>
//
//int main() {
//	// �д��� �����ð�, �����ϼ�, �����ð�, �������
//	// �� ���� ������ int�� ���� ����
//	int total_min;
//	int days;
//	int remaining_min;
//	int fee;
//	int extra_min;
//
//	printf("�����ð� �д��� �Է�: ");
//	//scanf_s�� �̿��� �� �����ð��� �� ������ �Է�
//	scanf_s("%d", &total_min);
//
//	// days, min, fee�� ������ �� ��� �� ����
//	days = total_min / 1440;
//	remaining_min = total_min % 1440;
//	fee = 0;
//	
//	// ���ǹ��� �̿��� 3~5�� �ش��ϴ� ��� ���
//	if (remaining_min > 0 && remaining_min <= 600) {
//		if (remaining_min <= 30) {
//			fee += 1200;
//		}
//		else {
//			fee += 1200;
//			extra_min = remaining_min - 30;
//			fee += (extra_min / 15) * 600;
//			if (extra_min % 15 > 0) {
//				fee += 600;
//			}
//		}
//	}
//	else if (remaining_min > 600) {
//		fee += 24000;
//	}
//	else {
//		fee += 0;
//	}
//	if (days >= 1) {
//		fee += days * 24000;
//	}
//
//	// printf�� �̿��� ������� ���
//	printf("�������: %d ��", fee);
//	return 0;
//}
//
