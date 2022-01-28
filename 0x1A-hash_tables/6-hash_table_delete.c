#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *hash_table_delete - function that delete a hash table
 * @ht: pointer hash table to delete.
 * Return: None is void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long i = 0;


	for (; i < ht->size; i++)
	{
		if (ht == NULL)
			return;
		while (ht->array[i] != NULL)
		{
			tmp = ht->array[i]->next;
			free(ht->array[i]->value);
			free(ht->array[i]->key);
			free(ht->array[i]);
			ht->array[i] = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
