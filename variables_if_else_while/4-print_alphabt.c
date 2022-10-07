#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Alphabet
 *
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}

	}
	putchar('\n');
	return (0);
}

