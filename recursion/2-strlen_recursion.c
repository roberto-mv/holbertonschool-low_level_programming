#include "main.h"

/**
 * _strlen_recursion - recursion
 * @s: pointer
 *
 * Return: return
 */
int _strlen_recursion(char *s)
{
	int contador;

	if (*s == '\0')
		return (0);
	contador = _strlen_recursion(s + 1);
	return (contador + 1);
}
