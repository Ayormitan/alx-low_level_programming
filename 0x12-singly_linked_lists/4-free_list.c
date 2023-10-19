#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Freeing linked list
 * @head: Pointer to the list to be freed
 *
 * Return: Freed list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
