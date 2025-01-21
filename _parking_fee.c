#include<stdio.h>

int main() {
	// 분단위 주차시간, 주차일수, 주차시간, 주차요금
	// 각 값을 저장할 int형 변수 선언
	int total_min;
	int days;
	int remaining_min;
	int fee;
	int extra_min;

	printf("주차시간 분단위 입력: ");
	//scanf_s를 이용해 총 주차시간을 분 단위로 입력
	scanf_s("%d", &total_min);

	// days, min, fee에 적합한 값 계산 후 대입
	days = total_min / 1440;
	remaining_min = total_min % 1440;
	fee = 0;
	
	// 조건문을 이용해 3~5에 해당하는 요금 계산
	if (remaining_min > 0 && remaining_min <= 600) {
		if (remaining_min <= 30) {
			fee += 1200;
		}
		else {
			fee += 1200;
			extra_min = remaining_min - 30;
			fee += (extra_min / 15) * 600;
			if (extra_min % 15 > 0) {
				fee += 600;
			}
		}
	}
	else if (remaining_min > 600) {
		fee += 24000;
	}
	else {
		fee += 0;
	}
	if (days >= 1) {
		fee += days * 24000;
	}

	// printf를 이용한 주차요금 출력
	printf("주차요금: %d 원", fee);
	return 0;
}

