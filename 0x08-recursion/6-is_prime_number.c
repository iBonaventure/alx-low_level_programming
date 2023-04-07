#include "main.h"
/**
 * helperFunction - This returns 0 or 1
 * @i: The possible factors of the number
 * @num: This is the number to be checked
 * Return: 0 if not prime and 1 if prime
 */

int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % 1 == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if number is prime or not
 * @n: The number to be checked
 * Return: 1 if numberis prime
 * 0 if number is not prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
