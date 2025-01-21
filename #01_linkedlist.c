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
		printf("%d 번째 노드의 이름: ", i);
		scanf("%c", name);
		printf("%d 번째 노드의 번호: ", i);
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
	

	//1번 노드 생성  
	head = ptr;
	tail = ptr;
	printf("첫 번째 노드의 이름: ");
	scanf("%s", ptr->name);
	printf("첫 번째 노드의 번호: ");
	scanf("%d", &ptr->number);
	ptr->link = NULL;

	printf("\n");
	
	//2번 노드 생성
	ptr = (struct NODE*)malloc(sizeof(struct NODE)); //선언을 해줘야 하는 듯 '계속'!!!!!!!!
	tail->link = ptr;
	printf("두 번째 노드의 이름: ");
	scanf("%s", ptr->name);
	printf("두 번째 노드의 번호: ");
	scanf("%d", &ptr->number);
	ptr->link = NULL;
	tail = ptr;

	printf("\n");

	//3번 노드 생성
	ptr = (struct NODE*)malloc(sizeof(struct NODE));
	tail->link = ptr;
	printf("세 번째 노드의 이름: ");
	scanf("%s", ptr->name);
	printf("세 번째 노드의 번호: ");
	scanf("%d", &ptr->number);
	ptr->link = NULL;
	tail = ptr;

	printf("\n\n");

	//linked list 출력
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