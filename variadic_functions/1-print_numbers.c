#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints integer arguments a separator
 * @separator: print between numbers
 * @n: number
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int i;
	va_list lista;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(lista, n);

	if (n > 0)
		printf("%d", va_arg(lista, int));
	for (i = 1; i < n; i++)
		printf("%s%d", sep, va_arg(lista, int));
	printf("\n");
	va_end(lista);
}
