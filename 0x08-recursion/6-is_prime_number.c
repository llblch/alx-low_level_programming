#include "main.h"

/**
 * is_prime_number - fucntion that returns the 1 if n is prime
 * @n: number to be checked
 *
 * Return: returns 1 if n is prime, else returns 0
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}
