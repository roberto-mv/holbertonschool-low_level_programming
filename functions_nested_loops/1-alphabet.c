#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
}
