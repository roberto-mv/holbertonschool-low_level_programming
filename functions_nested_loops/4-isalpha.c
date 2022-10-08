#include "main.h"

/**
 * _isalpha - returns whether c is an alpha character
 *
 * @c: ascii value of a charactetter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
