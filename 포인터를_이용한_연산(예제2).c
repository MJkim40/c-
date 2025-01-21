#include <stdio.h>

int main()
{
	int x, y, sum;
	x = 100;
	y = 200;
	
	int* ptr_x, * ptr_y, * ptr_sum;
	ptr_x = &x;
	ptr_y = &y;
	ptr_sum = &sum;
	*ptr_sum = *ptr_x + *ptr_y;
	printf("%d %d %d", *ptr_x, *ptr_y, *ptr_sum);

	return 0;
}
