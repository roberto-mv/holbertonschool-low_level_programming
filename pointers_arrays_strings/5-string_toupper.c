#include "main.h"
#include <string.h>

/**
 * string_toupper - a function
 *
 * @str: a pointer
 *
 * Return: return a string
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
