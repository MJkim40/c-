#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void dll_insert_head(), dll_insert_tail_head(), dll_insert();
void dll_update(), dll_delete();
void dll_print(), dll_rev_print();

struct NODE {
	struct NODE* prev;
	int ID;
	int value;
	struct NODE* next;
};

struct NODE* head;
struct NODE* tail;
struct NODE* ptr;

void dll_print() {
	ptr = head;
	printf("(ID, value): ");
	while (ptr != NULL) {
		printf("(%d, %d)", ptr->ID, ptr->value);
		ptr = ptr->next;
	}
	printf("\n");
}

void dll_rev_print() {
	ptr = tail;
	printf("(ID, value): ");
	while (ptr != NULL) {
		printf("(%d, %d)", ptr->ID, ptr->value);
		ptr = ptr->prev;
	}
	printf("\n");
}

void dll_insert_head() {
	ptr = (struct NODE*)malloc(sizeof(struct NODE));
	printf("Enter ID and value: ");
	scanf("%d %d", &ptr->ID, &ptr->value);
	if (head == NULL) {
		ptr->prev = NULL;
		head = ptr;
		tail = ptr;
	}
	else {
		ptr->prev = NULL;
		ptr->next = head;
		head = ptr;
	}
}

void dll_insert_tail_head() {
	ptr = (struct NODE*)malloc(sizeof(struct NODE));
	printf("Enter ID and value: ");
	scanf("%d %d", &ptr->ID, &ptr->value);
	if (head == NULL) {
		head = ptr;
	}
	else {
		tail->next = ptr;
	}
	ptr->prev = tail;
	ptr->next = NULL;
	tail = ptr;
}

void dll_insert() {
	int position, count = 0;
	ptr = head;
	struct NODE* tmp = (struct NODE*)malloc(sizeof(struct NODE));

	printf("Enter ID and value: ");
	scanf("%d %d", &tmp->ID, &tmp->value);

	while (ptr != NULL) {
		count++;
		ptr = ptr->next;
	}

	printf("Enter the position to insert (1 to %d): ", count + 1);
	scanf("%d", &position);

	ptr = head;

	if (position == 1) {
		dll_insert_head();
		return;
	}

	for (int i = 1; i < position - 1 && ptr != NULL; i++) {
		ptr = ptr->next;
	}

	if (ptr == NULL) {
		printf("Invalid position\n");
		free(tmp);
		return;
	}

	tmp->next = ptr->next;
	if (ptr->next != NULL) {
		ptr->next->prev = tmp;
	}
	ptr->next = tmp;
	tmp->prev = ptr;
}

void dll_update() {
	ptr = head;
	int num;
	printf("Enter ID to update: ");
	scanf("%d", &num);
	while (ptr != NULL) {
		if (ptr->ID == num) {
			printf("Enter new value for ID: ");
			scanf("%d", &ptr->value);
			return;
		}
		ptr = ptr->next;
	}
}

void dll_delete() {
	ptr = head;
	int num;
	printf("Enter ID to delete: ");
	scanf("%d", &num);

	//head¸¦ Áö¿ò
	if (head->ID == num) {
		ptr = head;
		head = head->next;
		if (head != NULL) {
			head->prev = NULL;
		}
		free(ptr);
		return;
	}

	while (ptr != NULL) {
		if (ptr->ID == num) {
			if (ptr->prev != NULL) {
				ptr->prev->next = ptr->next;
			}
			if (ptr->next != NULL) {
				ptr->next->prev = ptr->prev;
			}
			if (ptr == tail) {
				tail = ptr->prev;
			}
			free(ptr);
			printf("Node with ID %d deleted.\n", num);
			return;
		}
		ptr = ptr->next;
	}
}

int main() {
	head = NULL;
	int index, flag = 0;

	while (flag == 0) {
		printf("Enter [(1) Insert (2) Update (3) Delete (4) Print (5) Exit]:\t");
		scanf("%d", &index);

		if (index == 1) {
			printf("Enter [(1) insert-head (2) insert-tail (3) insert-middel]:\t");
			scanf("%d", &index);
			if (index == 1) {
				dll_insert_head();
			}
			else if (index == 2) {
				dll_insert_tail_head();
			}
			else if (index == 3) {
				dll_insert();
			}
			else {
				printf("enter again (1~3)");
			}
		}
		else if (index == 2) {
			dll_update();
		}
		else if (index == 3) {
			dll_delete();
		}
		else if (index == 4) {
			printf("Enter [(1) printf-forward (2) print-reverse]:\t");
			scanf("%d", &index);
			if (index == 1) {
				dll_print();
			}
			else if (index == 2) {
				dll_rev_print();
			}
			else {
				printf("enter again (1~2)");
			}
		}
		else if (index == 5) {
			printf("Exit\n");
			flag = 1;
		}
		else {
			printf("enter again (1~5)");
		}
	}
	return 0;
}