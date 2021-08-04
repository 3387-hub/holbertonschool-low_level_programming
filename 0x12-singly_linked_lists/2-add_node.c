#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_node - This function adds a new node at the beginning of a list_t list.
 *@head: This is my double pointer to a pointer to a content of head.
 *@str: This is the str to assing the new head.
 *Return: Always is *head.
 */
list_t *add_node(list_t **head, const char *str)

{
	list_t *pointernewhead;
	int i = 0;


	pointernewhead = malloc(sizeof(list_t));
		if (pointernewhead == NULL)
		{
			return (NULL);
		}

		while (str[i] != '\0')
		{
			i++;
		}
	pointernewhead->str = strdup(str);
	pointernewhead->len = i;
	pointernewhead->next = (*head);
	(*head) = pointernewhead;
	return (*head);

}
