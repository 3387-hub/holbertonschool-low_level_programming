#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that prints hash table in
 * it's array order.
 * @ht: hash table to prints
 * Return: none, is void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int i;
	int a = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (a == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", tmp->key, tmp->value);
			a = 1;

			tmp = tmp->next;

		}
	}
	printf("}\n");
}
