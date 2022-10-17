#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - function
 *
 * @a: pointer
 *
 * @size: an array's size
 *
 * Reture: void
 */

void print_diagsums(int *a, int size)
{
	int i, x, y;

	y = x = 0;
	for (i = 0; i < (size * size); i += size + 1)
		y += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		x += a[i];
	printf("%d, %d\n", y, x);
}
