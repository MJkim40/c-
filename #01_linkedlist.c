#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct NODE {
	char name[20];
	int number;
	struct NODE* link;
};

int main() {
	//struct NODE node;

	struct NODE* head;
	struct NODE* tail;
	struct NODE* ptr;

	/*char name[20];
	int number;*/

	head = NULL;
	ptr = (struct NODE*)malloc(sizeof(struct NODE));

	/*for (int i = 0; i < 3; i++) {
		printf("%d ��° ����� �̸�: ", i);
		scanf("%c", name);
		printf("%d ��° ����� ��ȣ: ", i);
		scanf("%d", number);
		if (head == NULL) {
			head = ptr;
		}
		else {
			tail->link = ptr;
		}
		ptr->name = name;
		ptr->number = number;
		ptr->link = NULL;
		tail = ptr;
		printf("\n");
	}*/
	

	//1�� ��� ����  
	head = ptr;
	tail = ptr;
	printf("ù ��° ����� �̸�: ");
	scanf("%s", ptr->name);
	printf("ù ��° ����� ��ȣ: ");
	scanf("%d", &ptr->number);
	ptr->link = NULL;

	printf("\n");
	
	//2�� ��� ����
	ptr = (struct NODE*)malloc(sizeof(struct NODE)); //������ ����� �ϴ� �� '���'!!!!!!!!
	tail->link = ptr;
	printf("�� ��° ����� �̸�: ");
	scanf("%s", ptr->name);
	printf("�� ��° ����� ��ȣ: ");
	scanf("%d", &ptr->number);
	ptr->link = NULL;
	tail = ptr;

	printf("\n");

	//3�� ��� ����
	ptr = (struct NODE*)malloc(sizeof(struct NODE));
	tail->link = ptr;
	printf("�� ��° ����� �̸�: ");
	scanf("%s", ptr->name);
	printf("�� ��° ����� ��ȣ: ");
	scanf("%d", &ptr->number);
	ptr->link = NULL;
	tail = ptr;

	printf("\n\n");

	//linked list ���
	ptr = head;
	printf("NAME / NUMBER: \n");
	while (ptr != NULL) {
		printf("\t(%s / %d)\n", ptr->name, ptr->number);
		ptr = ptr->link;
	}

	/*printf("NAME / NUMBER: \n");
	printf(sizeof(head));
	printf("\t(%s / %d)\n", head->name, head->number);
	printf("\t(%s / %d)\n", tail->name, tail->number);
	printf("\t(%s / %d)\n", ptr->name, ptr->number);*/

	return 0;
}