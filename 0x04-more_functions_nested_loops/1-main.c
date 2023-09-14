#include <stdio.h>
#include "main.h"
int main()
{
	char c;
	
	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
