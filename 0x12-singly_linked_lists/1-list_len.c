#include <stdio.h>
#include "lists.h"
/**
 * list_len - Print elements in a list
 *
 *@h: Pointer to elements in the list
 *Return: ALways elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
