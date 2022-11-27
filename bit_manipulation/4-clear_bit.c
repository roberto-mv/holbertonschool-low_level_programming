#include "main.h"

/**
 * clear_bit - Function
 * @n: NUmber
 * @index: Position
 *
 * Return: Return 1 if it worked, or -1 if an error occurred
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n = ~(1 << index) & *n;
	return (1);
}
