#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: change value b
 * @b: change value a
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tp;

	tp = *a;
	*a = *b;
	*b = tp;
}
