#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program multiplies two numbers.
 *only one argument per line.
 *@argc: This is the counter that save enough memory to the strings that
 *will be received.
 *@argv: This is the pointer who point the string received.
 *Return: always is (0)
 */

int main(int argc, char **argv __attribute__((unused)))

{
	int i;

	if (argc != 3)
	{

		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
