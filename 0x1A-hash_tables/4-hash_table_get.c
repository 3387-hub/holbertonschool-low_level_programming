#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_get - Funtion that return the value of a key in
 *a hash table
 * @ht: hash table pointer
 * @key: key to find the value in hash table.
 * Return: (char *) value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (index == 0)
		return (NULL);

	tmp = ht->array[index];
	if (!tmp)
		return (NULL);
	while (tmp != NULL)
	{
		return (tmp->value);
		tmp = tmp->next;
	}
	return (tmp->value);
}
