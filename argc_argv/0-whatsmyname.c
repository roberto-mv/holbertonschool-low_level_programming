#include <stdio.h>

/**
 * main - function
 * @argc: arguments counter
 * @argv: array of pointer
 *
 * Return: return 0 on success
 */

int main(int argc __ttribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
