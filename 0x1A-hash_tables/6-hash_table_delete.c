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
	hash_node_t *tmp = NULL, *s_tmp = NULL;
	unsigned long i = 0;


	for (; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			s_tmp = tmp;
			tmp = tmp->next;
			free(s_tmp->value);
			free(s_tmp->key);
			free(s_tmp);
		}
	}
	free(tmp);
	free(ht->array);
	free(ht);
}
