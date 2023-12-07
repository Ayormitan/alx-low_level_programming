#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - entry point to check code
 *
 * Return: Always EXIT_SUCCESS or 0 indicating success
 */
int main(void)
{
	dlistint_t *head;
	dlistint_t *new;
	dlistint_t hello = {8, NULL, NULL}; /** this variable will store struct members for int, prev and next**/
	size_t n;

	head = &hello; /** hello is the first node in the list of which head pointer is pointing to it**/
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("MALLOC FAIL");
		return (EXIT_FAILURE);
	}
	new->n = 9; /**set data of the newnod created to 9**/
	head->prev = new; /** the original head which is first node hello points to the new node**/
	new->next = head; /**the next new node point to the original head nod agian**/
	new->prev = NULL;
	head = new;

	n = dlistint_len(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (EXIT_SUCCESS);
}
