#include "main.h"
#include <string.h>

/**
 * leet - a function
 *
 * @str: a pointer
 *
 * Return: return a string
 */

char *leet(char *str)
{
	int i, j;
	char subs[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; subs[j] != '\0'; j++)
			if (str[i] == subs[j])
				str[i] = code[j];
	}
	return (str);
}
