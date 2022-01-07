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
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (!h)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (current)
	{
		if (count == idx)
		{
			new_node->n = n;
			new_node->prev = current->prev;
			new_node->next = current;
			current->prev->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		current = current->next;
		count = count + 1;
	}
	if (count == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
