#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
	unsigned long int index = 0;
	unsigned long int i;

	if (ht == NULL || key == NULL || ht->array == NULL
	|| *key == '\0' || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->value = (char *)value;
	new_node->key = (char *)key;
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	if (ht->array[index] != NULL)
	{
		tmp = ht->array[index];
		new_node->next = tmp;
		new_node->next->key = tmp->key;
		new_node->next->value = tmp->value;
		new_node->next->next = NULL;
		ht->array[index] = new_node;
	}
	else
		return (0);
	return (1);
}
