#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	long int o, t, c;
	long int e;

	o = 1;
	t = 1;
	c = 2;
	e = 2;

	for (i = 2; c < 4000000; i++)
	{
		t = o;
		o = c;
		c = t + o;

		if (!(c % 2))
			e += c;
	}
	printf("%ld\n", e);
	return (0);
}
