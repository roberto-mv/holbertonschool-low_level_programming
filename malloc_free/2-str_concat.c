#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The string
 * @s2: The string
 * Return: If concatenation fails - NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, todo_i = 0, l = 0;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		l++;

	str = malloc(sizeof(char) * l);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[todo_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		str[todo_i++] = s2[i];

	return (str);
}
