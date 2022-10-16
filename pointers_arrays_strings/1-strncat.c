#include "main.h"
#include <string.h>

/**
 * _strncat - his is a funtion
 *
 * @dest: first parameter
 *
 * @src: second parameter
 *
 * @n: copy poistion
 *
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0' && j < n && n != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
