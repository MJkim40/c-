#include <stdio.h>

int main()
{
	int x = 100;
	int* ptr_x;
	ptr_x = &x;

	*ptr_x = *ptr_x + 200;

	printf("x: %d\n", x);
	printf("*ptr_x: %d\n", *ptr_x);
	printf("ptr_x: %p\n", ptr_x);
	return 0;
}