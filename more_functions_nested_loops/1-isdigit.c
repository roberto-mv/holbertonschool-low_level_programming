#include "main.h"

/**
 * _isdigit - digit
 *
 * @c: examine
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
