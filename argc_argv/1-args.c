#include <stdio.h>

/**
 * main - function
 * @argc: arguments counter
 * @argv: array of pointer
 *
 * Return: return 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
