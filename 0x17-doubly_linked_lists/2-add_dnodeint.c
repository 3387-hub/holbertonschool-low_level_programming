#include <stdlib.h>
#include "lists.h"

/**
 *add_dnodeint - This function add a new node at the head.
 *@head: Double pointer to the old head.
 *@n: element type int of the old Node(head).
 *Return: Return the pointer of the new node at the head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_pointer;
	int copy_n = 0;

	new_pointer = malloc(sizeof(dlistint_t));

	if (new_pointer == NULL)
	{
		return (NULL);
	}
	if (n)
	{
		copy_n = n;
	}
	new_pointer->next = (*head);
	new_pointer->n = copy_n;
/*	(*head)->prev = new_pointer;*/
	new_pointer->prev = NULL;
	(*head) = new_pointer;
	return (*head);
}
