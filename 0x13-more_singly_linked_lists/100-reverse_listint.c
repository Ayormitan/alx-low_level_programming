#include "lists.h"
/**
 *reverse_listint - function reversees linked list
 *
 *@head: Pointer to the head node
 *Return: Pointer to the reversed node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
