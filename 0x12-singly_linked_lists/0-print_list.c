#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_list - This function prints all elements of a list_t list
 *@h: This is the pointer to modify list_t.
 *Return:
 *
 *
 */

size_t print_list(const list_t *h)

{
	size_t counter = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
			printf("\n");
		}
		h = h->next;
		counter = counter + 1;


	}



	return(counter);


}
