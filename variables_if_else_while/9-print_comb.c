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
int c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
	if (c != 9)
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
