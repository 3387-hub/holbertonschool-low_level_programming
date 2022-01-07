#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_dlistint - This function frees all nodes of a linked list.
 *@head: Pointer to head of linked list to free.
 *Return: None
 */
void free_dlistint(dlistint_t *head)
{

	if (head->next == NULL && head->prev == NULL)
		free(head);
	if (head == NULL)
		free(head);

	if (head->prev != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
		return;
	}
	while (head->next != NULL)
	{

		head = head->next;
		free(head->prev);
	}
	free(head);
}
