#include "main.h"
#include <string.h>

/**
 * _memcpy - function
 *
 * @dest: pointer
 * @src: pointer to string.
 * @n: the size the be copie
 *
 * Return: return a string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
