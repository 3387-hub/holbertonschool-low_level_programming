#include "holberton.h"
/**
 * print_chessboard - This function prints the cheess in *a
 *@a: is the pointer of my chess.
 */
void print_chessboard(char (*a)[8])

{
	int e, i;

	for (e = 0; e < 8; e++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[e][i]);
		}
		_putchar(10);
	}
}
