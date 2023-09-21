#include "main.h"
/**
 * reverse_array - Function reverses an array
 *
 * @a: pointer to the sizee of an array
 * @n: pointer to the element of an array
 * REeturn: Always success
 */
void reverse_array(int *a, int n)
{
	int temp[100]; /** delare sufficient size of array*/
	int i;

	for (i = 0; i < n; i++)
	{
		temp[i] = a[i]; /** store array temporarily*/
	}
	for (i = 0; i < n; i++)
	{
		a[i] = temp[n - i - 1]; /** copy from temp in rev order*/
	}
}
