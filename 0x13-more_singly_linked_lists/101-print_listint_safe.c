#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *looped_listint_len - counts the number of nodes
 *
 *@head: Pointer to the first node
 *
 * Return: Alwa the looped list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise;
	const listint_t *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	tortoise = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}
			return (nodes);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}
/**
 *print_listint_safe - prints a list
 *@head: pointer tothe first node
 *
 * Return: Alway nodes
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;

nodes = looped_listint_len(head);
if (nodes == 0)
{
	for (; head != NULL; nodes++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
}
else
{
	for (index = 0; index < nodes; index++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	printf("->[%p] %d\n", (void *)head, head->n);
}
return (nodes);
}
