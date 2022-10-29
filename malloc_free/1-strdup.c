#include <stdlib.h>

/**
 * _strdup - Returns a pointer
 * @str: The string to be copied
 * Return:  if str = NULL
 */
char *_strdup(char *str)
{
	char *dupli;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	dupli = malloc(sizeof(char) * (l + 1));

	if (dupli == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dupli[i] = str[i];

	dupli[l] = '\0';

	return (dupli);
}
