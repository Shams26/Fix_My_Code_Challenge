#include <string.h>
#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - Adds a node at the end of a list
 *
 * @head: Address of the pointer to the first element of the list
 * @n: number to store in the new element
 *
 * Return: Pointer to the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *nxt;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	nxt = *head;
	while (nxt->next != NULL)
	{
		nxt = nxt->next;
	}
	nxt->next = new;
	new->prev = nxt;
	return (new);
}
