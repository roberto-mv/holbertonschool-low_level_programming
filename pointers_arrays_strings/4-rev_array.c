#include "main.h"
#include <string.h>

/**
 * reverse_array - a function that reverses
 *
 * @a: a pointer
 *
 * @n: elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp =  0;
	n--;
	for ( ; i <= n; n--, i++)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
	}
}
