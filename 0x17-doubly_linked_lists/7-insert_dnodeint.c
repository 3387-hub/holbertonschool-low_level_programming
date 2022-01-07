#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - This function added a node
 *in a given index.
 *@h: pointer to the linked list.
 *@n: integer inside the prev node.
 *@idx: Index that user give us to add new node.
 *Return: Pointer to a new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *mvptr;
	unsigned int j = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = (*h);
		*h = new_node;
		return (new_node);
	}
	new_node->next = NULL;
	mvptr = *h;
	while (mvptr->next && j < (idx - 1))
	{
		mvptr = mvptr->next;
		j++;
	}
	if (j < (idx - 1))
	{
		return (NULL);
	}
	new_node->next = mvptr->next;
	mvptr->next = new_node;
	return (new_node);
}
