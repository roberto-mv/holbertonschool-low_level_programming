#include "main.h"
#include <string.h>

/**
 * _strcat - his is a funtion strcat
 *
 * @dest: first parameter
 *
 * @src: second parameter
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	char *aux;

	aux = dest;
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (aux);
}

