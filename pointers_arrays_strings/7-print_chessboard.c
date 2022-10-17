#include "main.h"
#include <string.h>

/**
 * print_chessboard - function
 *
 * @a: pointer point to a[8] array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		j = 0;
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
