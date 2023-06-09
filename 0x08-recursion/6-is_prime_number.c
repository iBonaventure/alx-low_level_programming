#include "main.h"

int true_prime(int n, int i);
/**
 * is_prime_number - checks if number is prime or not
 * @n: The number to be checked
 * Return: 1 if numberis prime
 * 0 if number is not prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	{
		return (true_prime(n, n - 1));
	}
}

/**
 * true_prime - This calculates if a number is prime
 * @i: The possible factors of the number
 * @n: number to evaluate
 * Return: 0 if not prime and 1 if prime
 */

int true_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (true_prime(n, i - 1));
}

