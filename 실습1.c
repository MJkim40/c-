#include <stdio.h>


int main() {
	int* pi;
	double* pf;
	char* pc;
	pi = (int*)malloc(sizeof(int));
	pf = (double*)malloc(sizeof(double));
	pc = (char*)malloc(sizeof(char));
	if (pi == NULL || pf == NULL || pc == NULL) {
		printf("µ¿Àû ¸Þ¸ð¸® ÇÒ´ç ¿À·ù\n");
		exit(1);
	}

	*pi = 100;
	*pf = 3.14;
	*pc = 'a';

	free(pi);
	free(pf);
	free(pc);
	return 0;
}
