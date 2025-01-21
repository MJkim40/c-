#include <stdio.h>

int main()
{
	char board[3][3];
	int x, y;
	int a = 0;

	//3 X 3 size board 초기화
	for (int i = 0; i < 3; i++) {
		board[i][0] = ' ';
		board[i][1] = ' ';
		board[i][2] = ' ';
	}
	//총 9번동안 게임을 진행
	for (int num = 0; num < 9; num++) {
		//좌표를 입력받아 해당 위치에 말을 놓음
		printf("말을 놓을 좌표를 입력해주세요: ");
		scanf_s("%d, %d", &x, &y);
		//잘못된 좌표 입력에 대한 처리, 이미 말이 놓여있는 자리에 대한 처리
		while (x > 2 || y > 2 || board[x][y] == 'O' || board[x][y] == 'X') {
			//잘못된 좌표 입력에 대한 처리
			if (x > 2 || y > 2) {
				printf("잘못된 좌표 입력입니다. 0과 2 사이의 수를 입력해주세요: ");
				scanf_s("%d, %d", &x, &y);
			}
			//이미 말이 놓여있는 자리에 대한 처리
			else if (board[x][y] == 'O' || board[x][y] == 'X') {
				printf("이미 말이 놓여있는 자리입니다. 좌표를 다시 입력해주세요: ");
				scanf_s("%d, %d", &x, &y);
			}
		}
		//첫 번째 말을 놓는 player는 O, 두 번째 말을 놓는 player는 X 사용
		char mark = (num % 2 == 0) ? 'O' : 'X';
		board[x][y] = mark;
		//말을 놓을 때마다 board 상태 출력
		for (int i = 0; i < 3; i++)
		{
			printf("---|---|---\n");
			printf("%c  |%c  |%c  \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");
		//승자 판별에 대한 처리
		//9개의 말을 다 놓기 전에 승자가 나왔을 때
		if ((board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') || (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')) {
			if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
				printf("\n");
				printf("1번 플레이어 승리\n");
				a = 1;
			}
			else {
				printf("\n");
				printf("2번 플레이어 승리\n");
				a = 1;
			}
			break;
		}
		else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
			printf("\n");
			printf("1번 플레이어 승리\n");
			a = 1;
			break;
		}
		else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
			printf("\n");
			printf("2번 플레이어 승리\n");
			a = 1;
			break;
		}
		else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
			printf("\n");
			printf("1번 플레이어 승리\n");
			a = 1;
			break;
		}
		else if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
			printf("\n");
			printf("2번 플레이어 승리\n");
			a = 1;
			break;
		}
		else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
			printf("\n");
			printf("1번 플레이어 승리\n");
			a = 1;
			break;
		}
		else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
			printf("\n");
			printf("2번 플레이어 승리\n");
			a = 1;
			break;
		}
		else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
			printf("\n");
			printf("1번 플레이어 승리\n");
			a = 1;
			break;
		}
		else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
			printf("\n");
			printf("2번 플레이어 승리\n");
			a = 1;
			break;
		}
		else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') {
			printf("\n");
			printf("1번 플레이어 승리\n");
			a = 1;
			break;
		}
		else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') {
			printf("\n");
			printf("2번 플레이어 승리\n");
			a = 1;
			break;
		}
		else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') {
			printf("\n");
			printf("1번 플레이어 승리\n");
			a = 1;
			break;
		}
		else if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') {
			printf("\n");
			printf("2번 플레이어 승리\n");
			a = 1;
			break;
		}
		else if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {
			printf("\n");
			printf("1번 플레이어 승리\n");
			a = 1;
			break;
		}
		else if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') {
			printf("\n");
			printf("2번 플레이어 승리\n");
			a = 1;
			break;
		}
	}
	if (a == 0) {
		printf("\n");
		printf("무승부\n");
	}
	return 0;
}


