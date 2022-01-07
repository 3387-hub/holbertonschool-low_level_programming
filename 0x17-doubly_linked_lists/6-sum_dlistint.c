#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_dlistint - This function return the sum of all element n
 *in the double linked list.
 *@head: This is the pointer to the head of a linked list.
 *Return: Count with the sum of all n in the linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	int counter = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		counter += head->n;
		head = head->next;
	}
	return (counter);

}
