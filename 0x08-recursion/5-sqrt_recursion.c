#include "main.h"
/**
 * helperFunction - This checks for existing sqrt of number
 * @num: number
 * @pSqrt: possible sqrt of numbers
 * Return: sqrt of number -1 for error
 */


int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion - returns the square root of number
 * @n: number whose sqrt is to be found
 * Return: sqareroot of n
 * -1 if n does not have a natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}

