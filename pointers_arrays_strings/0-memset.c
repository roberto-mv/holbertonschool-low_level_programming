#include "main.h"
#include <string.h>

/**
 * _memset - funtion
 *
 * @s: pointer
 *
 * @b: byte
 *
 * @n: number
 *
 * Return: char *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
	{
		s[i] = b;
	}
	return (s);
}
