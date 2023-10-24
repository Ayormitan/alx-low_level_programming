#include <stddef.h>
#include "lists.h"
/**
 *listint_len - rints lenght of a list
 *
 * @h: pointer to list
 *Return: Lists len
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
