#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 *
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node(&head, "Ayomitan");
	add_node(&head, "Omotayo");
	print_list(head);
	return (0);
}
