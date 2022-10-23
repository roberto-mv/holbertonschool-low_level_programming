#include <stdio.h>

/**
 * main - function
 * @argc: arguments counter
 * @argv: array of pointer
 *
 * Return: return 0 on success
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}	
	return (0);
}
