#include "main.h"

/**
 * is_prime_number - funtion
 * @n: number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(2, n));
}
/**
 * is_prime - Counts the multiples of a number
 * @contador: counter
 * @n: number
 *
 * Return: 1 or 0
 */
int is_prime(int contador, int n)
{
	if (contador == n)
		return (1);
	if (n % contador == 0)
		return (0);
	return (is_prime(contador + 1, n));
}
