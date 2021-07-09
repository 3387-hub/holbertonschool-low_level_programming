#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program adds positive numbers.
 *@argc: This is the counter that save enough memory to the strings that
 *will be received.
 *@argv: This is the pointer who point the string received.
 *Return: always is (0)
 */

int main(int argc, char *argv[])

{
	int i;
	int j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
