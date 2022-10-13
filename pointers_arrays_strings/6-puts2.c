#include "main.h"
#include <string.h>

/**
 * puts2 - funtion prints every other character
 *
 * @str: parameter
 *
 * Return: void
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
