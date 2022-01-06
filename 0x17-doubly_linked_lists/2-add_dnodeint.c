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
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_pointer == NULL)
	{
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->n = n;
	if (*head)
	{
		(*head)->prev = new_node;
		new_node->next = *head;

	}
	else
	{
		new_node->next = NULL;
	}
	(*head) = new_pointer;
	return (*head);
}
