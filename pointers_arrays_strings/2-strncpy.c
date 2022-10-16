#include "main.h"
#include <string.h>

/**
 * _strncpy - a function
 *
 * @dest: a pointer dest string
 *
 * @src: a pointer src string
 *
 * @n: the numbers
 *
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
