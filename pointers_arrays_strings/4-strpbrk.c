#include "main.h"
#include <string.h>

/**
 * _strpbrk - function
 *
 * @s: pointer to string
 *
 *@accept: pointer to another string
 *
 *Return: return
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
