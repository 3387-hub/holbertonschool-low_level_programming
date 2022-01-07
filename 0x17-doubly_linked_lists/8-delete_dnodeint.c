#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *delete_dnodeint_at_index - This function delete a node
 *in the given index by user.
 *@head: Pointer to the head of the linked list
 *@index: Given index to delete.
 *Return: 1 in succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *firstnode;
	unsigned int i;
	unsigned int lenght = node_len(head);

	firstnode = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		firstnode = firstnode->next;
		free(*head);
		*head = firstnode;
		if (firstnode != NULL)
			firstnode->prev = NULL;
		return (1);
	}
	for (i = 0; i <= index - 1; i++)
	{
		firstnode = firstnode->next;
		if (!firstnode)
			return (-1);
	}
	if (lenght - 1 == index)
	{
		firstnode->prev->next = NULL;
		free(firstnode);
		return (1);
	}
	firstnode->prev->next = firstnode->next;
	firstnode->next->prev = firstnode->prev;
	free(firstnode);
	return (1);
}

/**
* node_len - Count nodes
* @node: double pointer
* Return: int
*/

unsigned int node_len(dlistint_t **node)
{
	unsigned int length = 0;
	dlistint_t *firstnode;

	firstnode = *node;
	while (firstnode != NULL)
	{
	length += 1;
	firstnode = firstnode->next;
	}
	return (length);

}
