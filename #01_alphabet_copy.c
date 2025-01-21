//#include <stdio.h>
//
//int main() {
//	char line[100] = "##@computer##";
//	char line2[100] = "";
//	
//	int k = 0;
//	for (int i = 0; line[i] != '\0' ; ++i) {
//		while (line[i] >= 'A' && line[i] <= 'z') { //'A'가 아스키코드 가장 작음, 'z'가 아스키코드 가장 큼
//			line2[k++] = line[i++]; //line2의 k번째 인덱스에 line의 i번째 인덱스를 인식
//		}
//	}
//	line2[k] = '\0'; //'null'문자가 없는 상태여서 강제로 넣어줌
//
//	printf("입력 문자열: %s\n", line); 
//	printf("출력 문자열: %s", line2); //우리가 수정한 거
//
//	return 0;
//}