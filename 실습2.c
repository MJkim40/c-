#include <stdio.h>
#include <stdlib.h>

int main() {
	char* pc;

	pc = (char*)malloc(100 * sizeof(char));
	if (pc == NULL) {
		printf("¸Þ¸ð¸® ÇÒ´ç ¿À·ù\n");
		return 1;
	}
	for (int i = 0; i < 100; i++) {
		pc[i] = 'a';
		for (int i = 0; i < 100; i++) {
			printf("%c", pc[i]);
		}
	}
	free(pc);
	return 0;
}
