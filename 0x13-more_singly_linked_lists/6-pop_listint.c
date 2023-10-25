#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - deletes nodes in a list
 *@head: pointer to the first node
 *
 *Return: The data inside elements of the node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || *head)
	{
		return (0);
	}
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
