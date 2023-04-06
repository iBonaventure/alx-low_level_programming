#include "main.h"
/**
 * _strlen_recursion - This returns the  length of the string
 * @s: The string length to be returned
 * Return: Length
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

