#include <stdio.h>
int main(void)
{
	char az = 'a';
	
	while (az < 'z')
	{
		putchar(az);
		az++;
	}
	putchar('\n');
	return (0);
}
