#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *list_len - This function returns the number of elements in a linked
 *list-t list
 *@h: Is the pointer which i could access the elements in my list_t struct.
 *Return: Always return counter, which contains the count of how many
 *it throuthg.
 */
size_t list_len(const list_t *h)

{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter = counter + 1;
	}


		return (counter);

}
