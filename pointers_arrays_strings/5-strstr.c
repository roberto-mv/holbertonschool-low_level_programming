#include "main.h"
#include <string.h>

/**
 * _strstr - function
 *
 * @haystack: pointer
 *
 * @needle: pointer
 *
 * Return: return
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int cc;
	int xx = 0;
	char *p = 0;

	for (i = 0; needle[i] != '\0'; i++)
		xx++;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		cc = 0;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] == needle[j])
				cc++;
			else
				break;
		}
		if (cc == xx)
		{
			p = (haystack + i);
			break;
		}
	}
	if (p != 0)
		return (p);
	else
		return (NULL);
}
