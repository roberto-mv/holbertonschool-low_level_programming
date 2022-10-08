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

	o = 1;
	t = 1;
	c = 2;
	printf("%lu", t);
	printf(", %lu", c);
	for (i = 2; i < 50; i++)
	{
		t = o;
		o = c;
		c = t + o;

		printf(", %ld", c);
	}
	printf("\n");
	return (0);
}
