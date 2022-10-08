#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);

	_putchar('\n');
}
