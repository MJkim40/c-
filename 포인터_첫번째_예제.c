#include <stdio.h>

int main()
{
	int x;
	int *ptr_x;
	x = 100;
	ptr_x = &x;
	printf("x: %d, &x: %p\n", x, &x);
	printf("*ptr_x: %d, ptr_x: %p\n", *ptr_x, ptr_x);
	*ptr_x = 200;
	printf("x: %d, *ptr_x: %d\n", x, *ptr_x);
	return 0;
}
