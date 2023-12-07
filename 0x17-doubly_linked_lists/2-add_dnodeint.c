#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *add_dnodein - function prints list of nodes
 *
 *@head: Double pointer to hed node
 *@n: Data to be pased to nodes
 *Return: Always nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
	printf("Memory allocation failed");
	return (NULL);
	}
	new->n = n; /** sets data n to a newly created node*/
	new->prev = NULL;/** Set previous pointer to NULL**/
	new->next = *head;/** set next pointer to head**/
	*head = new; /** update head to new*/
	return (new);
}
