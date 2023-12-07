#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Function will print the elements in a linked list
 *
 * @h: Pointer to the elements in the list
 *Return: Always the elements and the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int ele = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ele++;
	}
	return (ele);
}
