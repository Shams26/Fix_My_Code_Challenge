#include <string.h>
#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - Frees a list
 *
 * @head: Pointer to the first element of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
