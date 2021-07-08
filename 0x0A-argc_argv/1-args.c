#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program prints the number of arguments passed into it
 *@argc: This is the counter that save enough memory to the strings that
 *will be received.
 *@argv: This is the pointer who point the string received.
 *Return: always is (0)
 */

int main(int argc, char **argv __attribute__((unused)))

{
	printf("%d\n", argc - 1);
	return (0);
}
