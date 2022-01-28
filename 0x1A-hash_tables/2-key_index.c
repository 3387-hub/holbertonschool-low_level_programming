#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
*key_index - Function that gives you the index of a key.
* @key: we use the key to try find the index in which it is.
* @size: is the size of the array.
* Return: it return the number of the index in which key is
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result;

	result = hash_djb2(key);
	result = result % size;
	return (result);

}
