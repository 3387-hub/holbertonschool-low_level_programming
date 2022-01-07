#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint_end - This function  add a new node at the end
 *of the double linked list.
 *@head: This is the pointer to the head of the linked list.
 *@i: This is an int element of each node in the linked list.
 *Return: A pointer to new node at the end of the linked list.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *ph = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);


	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (ph->next != NULL)
		ph = ph->next;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = ph;
	ph->next = new_node;

	return (new_node);
}
