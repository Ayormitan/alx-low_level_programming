#include <stdio.h>
#include "function_pointers.h"
int _is98(int ele)
{
	return (ele == 98);
}
int _all_positive(int ele)
{
	return (ele > 0);
}
int _abs_98(int ele)
{
	return (ele == 98 || -ele == 98);
}
int main(void)
{
	int array[6] = {-2, 0, 980, -34, 1003, 43};
	int index;

	index = int_index(array, 6, _is98);
	printf("%d\n", index);
	index = int_index(array, 6, _all_positive);
	printf("%d\n", index);
	index = int_index(array, 6, _abs_98);
	printf("%d\n", index);
	return (0);
}
