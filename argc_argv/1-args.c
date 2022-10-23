#include <stdio.h>

/**
 * main - function
 * @argc: arguments counter
 * @argv: array of pointer
 *
 * Return: return 0 on success
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
