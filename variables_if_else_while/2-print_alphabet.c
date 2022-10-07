#include <stdio.h>
/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 97;

	while (c < 123)
	{
		putchar(c);
		c++;
	}
	putchar(10);

	return (0);
}
