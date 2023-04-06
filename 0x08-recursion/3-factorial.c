#include "main.h"

/**
 * factorial - This returns the factorial of a number
 * @n: The given number
 * Return: factorial
 * -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

