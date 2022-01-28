#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
*hash_table_set -  function that adds an
* element to the hash table.
*@key: is the key to find the index and add an element.
*@value: value associate to the key.
*@ht: pointer to the new hash table.
*Return: 1 in success, 0 otherwise.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *tmp = NULL;
	char *cp_value = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || ht->array == NULL
	|| ht->size == 0 || *key == '\0' || value == NULL)
		return (0);

	cp_value = (char *)value;
	index = key_index((unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->value = cp_value;
	new_node->key = (char *)key;
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		if (!ht->array[index])
			return (0);
		return (1);
	}
	else if (ht->array[index]->value != NULL)
	{
		tmp = ht->array[index];
		new_node->next = tmp;
		new_node->next->key = tmp->key;
		new_node->next->value = tmp->value;
		ht->array[index] = new_node;
		if (!ht->array[index])
			return (0);
		return (1);
	}
	return (0);
}
