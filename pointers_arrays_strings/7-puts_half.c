#include "main.h"
#include <string.h>

/**
 * puts_half - funtion prints every other character
 *
 * @str: parameter
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, x, y;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
		_putchar(str[i]);
	_putchar('\n');
}
