#include <unistd.h>
/**
* _putchar - Writes C character to std output
*
* Return: Return 1 on success,
* on error -1 is returned, and error number set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
