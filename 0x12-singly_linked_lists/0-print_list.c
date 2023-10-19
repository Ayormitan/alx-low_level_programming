#include <stdio.h>
#include "lists.h"
/**
 * print_list - Print elements in a list
 *
 *@h: Pointer to elements in the list
 *Return: ALways elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
		printf("[0] (nill)\n");
		}
		else
		{
		printf("[%lu] %s\n", h->len, h->str);
		}
		h = h->next;
	count++;
	}
	return (count);
}
