#include "main.h"
#include <string.h>

/**
 * print-rev - printing a string in reverse
 *
 * @s: the string to be printed in rev
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
}
