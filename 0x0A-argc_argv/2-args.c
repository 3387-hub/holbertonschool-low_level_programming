#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program prints all the arguments that it receives, it prints
 *only one argument per line.
 *@argc: This is the counter that save enough memory to the strings that
 *will be received.
 *@argv: This is the pointer who point the string received.
 *Return: always is (0)
 */

int main(int argc __attribute__((unused)), char **argv)
{

	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}


	return (0);
}
