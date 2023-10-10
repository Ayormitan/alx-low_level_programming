#include <stdio.h>
#include "3-function_like_macro.h"
int main(void)
{
	int i;
	int j;

	i = ABS(-8) * 11;
	j = ABS(8) * 11;
	printf("%d, %d\n", i, j);
	return (0);
}
