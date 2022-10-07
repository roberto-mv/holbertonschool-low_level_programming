#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Numbers
 *
 * Return: 0
 */

int main(void)
{
int c, x;
for (c = 48; c < 57; c++)
{
for (x = c + 1; x < 589; x++)
{
	putchar(c);
	putchar(x);
	if (c != 56 && x != 57)
	{
		putchar(',');
		putchar(' ');
	}
	}
}
putchar('\n');
return (0);
}
