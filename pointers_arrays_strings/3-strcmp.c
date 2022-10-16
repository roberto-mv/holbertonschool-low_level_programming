#include "main.h"
#include <string.h>

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: a pointer point to string s1
 *
 * @s2: a pointer point to string s2
 *
 * Return: return two strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
