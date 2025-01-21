#include <stdio.h>

int main()
{
	char board[3][3];
	int x, y;
	int a = 0;

	//3 X 3 size board �ʱ�ȭ
	for (int i = 0; i < 3; i++) {
		board[i][0] = ' ';
		board[i][1] = ' ';
		board[i][2] = ' ';
	}
	//�� 9������ ������ ����
	for (int num = 0; num < 9; num++) {
		//��ǥ�� �Է¹޾� �ش� ��ġ�� ���� ����
		printf("���� ���� ��ǥ�� �Է����ּ���: ");
		scanf_s("%d, %d", &x, &y);
		//�߸��� ��ǥ �Է¿� ���� ó��, �̹� ���� �����ִ� �ڸ��� ���� ó��
		while (x > 2 || y > 2 || board[x][y] == 'O' || board[x][y] == 'X') {
			//�߸��� ��ǥ �Է¿� ���� ó��
			if (x > 2 || y > 2) {
				printf("�߸��� ��ǥ �Է��Դϴ�. 0�� 2 ������ ���� �Է����ּ���: ");
				scanf_s("%d, %d", &x, &y);
			}
			//�̹� ���� �����ִ� �ڸ��� ���� ó��
			else if (board[x][y] == 'O' || board[x][y] == 'X') {
				printf("�̹� ���� �����ִ� �ڸ��Դϴ�. ��ǥ�� �ٽ� �Է����ּ���: ");
				scanf_s("%d, %d", &x, &y);
			}
		}
		//ù ��° ���� ���� player�� O, �� ��° ���� ���� player�� X ���
		char mark = (num % 2 == 0) ? 'O' : 'X';
		board[x][y] = mark;
		//���� ���� ������ board ���� ���
		for (int i = 0; i < 3; i++)
		{
			printf("---|---|---\n");
			printf("%c  |%c  |%c  \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");
		//���� �Ǻ��� ���� ó��
		//9���� ���� �� ���� ���� ���ڰ� ������ ��
		if ((board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') || (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')) {
			if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
				printf("\n");
				printf("1�� �÷��̾� �¸�\n");
				a = 1;
			}
			else {
				printf("\n");
				printf("2�� �÷��̾� �¸�\n");
				a = 1;
			}
			break;
		}
		else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
			printf("\n");
			printf("1�� �÷��̾� �¸�\n");
			a = 1;
			break;
		}
		else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
			printf("\n");
			printf("2�� �÷��̾� �¸�\n");
			a = 1;
			break;
		}
		else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
			printf("\n");
			printf("1�� �÷��̾� �¸�\n");
			a = 1;
			break;
		}
		else if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
			printf("\n");
			printf("2�� �÷��̾� �¸�\n");
			a = 1;
			break;
		}
		else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
			printf("\n");
			printf("1�� �÷��̾� �¸�\n");
			a = 1;
			break;
		}
		else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
			printf("\n");
			printf("2�� �÷��̾� �¸�\n");
			a = 1;
			break;
		}
		else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
			printf("\n");
			printf("1�� �÷��̾� �¸�\n");
			a = 1;
			break;
		}
		else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
			printf("\n");
			printf("2�� �÷��̾� �¸�\n");
			a = 1;
			break;
		}
		else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') {
			printf("\n");
			printf("1�� �÷��̾� �¸�\n");
			a = 1;
			break;
		}
		else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') {
			printf("\n");
			printf("2�� �÷��̾� �¸�\n");
			a = 1;
			break;
		}
		else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') {
			printf("\n");
			printf("1�� �÷��̾� �¸�\n");
			a = 1;
			break;
		}
		else if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') {
			printf("\n");
			printf("2�� �÷��̾� �¸�\n");
			a = 1;
			break;
		}
		else if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {
			printf("\n");
			printf("1�� �÷��̾� �¸�\n");
			a = 1;
			break;
		}
		else if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') {
			printf("\n");
			printf("2�� �÷��̾� �¸�\n");
			a = 1;
			break;
		}
	}
	if (a == 0) {
		printf("\n");
		printf("���º�\n");
	}
	return 0;
}


