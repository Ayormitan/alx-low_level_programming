#include "lists.h"
#include <stdlib.h>
/**
 * *add_dnodeint_end - pointer funct to add new node to end of list
 *
 *@head: double pointer to head node
 *@n: pointer to data to store
 *Return: Always success
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
