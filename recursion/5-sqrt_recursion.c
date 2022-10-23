#include "main.h"

/**
 * _sqrt_recursion - recursion
 * @n: number
 *
 * Return: return
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (n);
	return (sqrt_fb(n, 2));
}

/**
 * sqrt_fb - counter
 * @n: number
 * @contador: error number
 *
 * Return: square root
 */
int sqrt_fb(int n, int contador)
{
	if (contador * contador < n)
		return (sqrt_fb(n, contador + 1));
	if (contador * contador == n)
		return (contador);
	return (-1);
}
