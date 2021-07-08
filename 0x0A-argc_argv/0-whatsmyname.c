#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program prints its name, folloed by a new line.
 *@argc: This is the counter that save enough memory to the strings that
 *will be received
 *@argv: This is the pointer who point the string received.
 *Return: always is (0)
 */

int main(int argc __attribute__((unused)), char *argv[])

{

	printf("%s\n", argv[0]);
	return (0);

}
