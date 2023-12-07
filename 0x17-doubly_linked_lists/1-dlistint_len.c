#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - prints elements in a list
 *
 * @h: pointer to the list element
 * Return: Alway list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *curr = h;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}
	return (count);
}
