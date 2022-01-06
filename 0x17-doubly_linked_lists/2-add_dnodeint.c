#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

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
	(*head) = new_pointer;
	return (*head);
}
