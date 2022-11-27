#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Function
 * @n: Number
 * @m: Number
 *
 * Return: Numbers
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter;

	for (counter = i = 0; i < 64; i++, counter++)
		if (((n >> i) & 1) == ((m >> i) & 1))
			counter--;

	return (counter);
}
