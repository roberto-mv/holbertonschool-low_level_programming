#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints integer arguments a separator
 * @separator: print between numbers
 * @n: number
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *ptr;
	unsigned int i;
	va_list lista;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(lista, n);

	if (n > 0)
		printf("%s", va_arg(lista, char*));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(lista, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sep, ptr);
	}
	printf("\n");
	va_end(lista);
}
